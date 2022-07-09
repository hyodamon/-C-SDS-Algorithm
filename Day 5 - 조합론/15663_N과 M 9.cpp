#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int arr[8];
int nums[8];
int check[8];

void combi(int depth) {
    if (depth == M) {
        for(int i = 0; i < M; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    int prev = 0;

    for (int i = 0; i < N; i++) {
        if (check[i] == 0 && nums[i] != prev) {
            arr[depth] = nums[i];
            prev = arr[depth];
            check[i] = 1;
            combi(depth + 1);
            check[i] = 0;
        }
    }
}

int main() { ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        nums[i] = num;
    }

    sort(nums, nums + N);

    combi(0);

    return 0;
}