#include <iostream>
using namespace std;

int N, M;
int trees[1000000];

int main() {
    cin >> N >> M;

    int max = 0;
    int min = 0;
    int answer = 0;
    for(int i = 0; i < N; i++) {
        cin >> trees[i];
        if (trees[i] > max) {
            max = trees[i];
        }
    }

    if (M == 0) {
        cout << max << endl;
        return 0;
    }

    while(max >= min) {
        int mid = (max + min) / 2;
        long long int sum = 0;
        for (int i = 0; i < N; i++) {
            if (trees[i] > mid ) {
                sum += trees[i] - mid;
            }
        }

        cout << "MAX : " << max << " MID : " << mid << " MIN : " << min << " SUM : " << sum << endl;
        if (sum < M) {
            max = mid - 1;
        } else {
            min = mid + 1;
            answer = mid;
        }
    }
    cout << answer << endl;
}
