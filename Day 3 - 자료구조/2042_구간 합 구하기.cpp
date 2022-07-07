#include <iostream>

using namespace std;

int N, M, K;
long long tree[1024 * 1024 * 2];
int tmpN;

void update(long long a, long long b) {
    // a번 째 값 > tmpN
    a = a + tmpN - 1;
    tree[a] = b;
    while(a > 0) {
        a = a >> 1;
        tree[a] = tree[a*2] + tree[a*2 + 1];
    }
}

long long get_sum(long long a, long long b) { // a ~ b까지 합
    a = a + tmpN - 1;
    b = b + tmpN - 1;

    long long sum = 0;
    while(a <= b) {
        // 만약 a가 right_child라면 자신의 값을 sum에 저장
        if((a & 1)) sum += tree[a];

        // 만약 b가 left_child라면
        if((b & 1) == 0) sum += tree[b];

        a = (a + 1) >> 1;
        b = (b - 1) >> 1;
    }
    return sum;
}


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;
    // 1. tree의 배열 크기 정하기 -> tmpN * 2
    // tmpN = leafnode의 개수
    for (tmpN = 1; tmpN < N; tmpN = tmpN * 2);

    // 2. tree 값 초기화
    // 2-1. leafnode에 값 입력
    for (int i = 0; i < N; i++) cin >> tree[tmpN + i];

    // 2-2. internel node 계산
    for (int i = tmpN - 1; i >= 1; i--) tree[i] = tree[2 * i] + tree[2 * i + 1];

    // 3. 구간
    long long a, b, c;
    for (int q = 0; q < M + K; q++) {
        cin >> a >> b >> c;
        if (a == 1) {
            // 3-1. update ( a = 1 )
            update(b, c);
        } else {
            // 4. 구간합 구하기
            cout << get_sum(b, c) << endl;
        }
    }

    return 0;
}
