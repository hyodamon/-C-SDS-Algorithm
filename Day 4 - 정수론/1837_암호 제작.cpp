#include <iostream>

using namespace std;

string P;
int K;
bool che[1000000];
int prime[1000000];
int cnt = 0;

void getPrime() {
    for (int i = 2; i <= K; i++) {
        if (!che[i]) {
            prime[cnt++] = i;
            for (int j = i * 2; j <= K; j += i) {
                if (!che[j]) {
                    che[j] = true;
                }
            }
        }
    }
}

bool check(int N) {
    int sum = 0;
    for (int i = 0; P[i]; i++) {
        sum = (sum * 10 + (P[i] - '0')) % N;
    }
    if (sum == 0) return true;
    return false;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> P >> K;

    getPrime();

    bool good = true;
    int answer = 0;

    for(int i = 1; i < cnt; i++) {
        if (check(prime[i])) { // 작은 소수 출력
            good = false;
            answer = prime[i];
            break;
        }
    }

    if (good) {
        cout << "GOOD" << "\n";
    } else {
        cout << "BAD " << answer << "\n";
    }
    return 0;
}