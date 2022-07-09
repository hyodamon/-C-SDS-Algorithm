#include <iostream>

using namespace std;

int N;
int first;
int target;
long long nums[100][21];

int main() { ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N;

    for(int i = 0; i < N; i++) {
        for (int j = 0; j <= 20; j++) {
            nums[i][j] = 0;
        }
    }

    cin >> first;
    nums[0][first] = 1;

    for (int i = 1; i < N - 1; i++) {
        int num;
        cin >> num;
        for (int j = 0; j <= 20; j++) {
            if (j + num <= 20) nums[i][j + num] += nums[i - 1][j];
            if (j - num >= 0) nums[i][j - num] += nums[i - 1][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= 20; j++) {
            cout << nums[i][j] << " ";
        }
        cout << "\n";
    }

    cin >> target;

    cout << nums[N - 2][target];

    return 0;
}
