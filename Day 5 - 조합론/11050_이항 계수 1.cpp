#include <iostream>

using namespace std;

int N, K;
int C[11][11];

int main() { ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> K;
    C[0][0] = 1;

    for(int i = 1; i <= N; i++) {
        C[i][0] = C[i][i] = 1;
        for (int j = 1; j < i; j++) {
            C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }

    cout << C[N][K] << "\n";
//    int A = 1;
//    int B = 1;
//    int C = 1;
//    for (int i = 1; i <= N; i++) {
//        A *= i;
//    }
//
//    for (int i = 1; i <= K; i++) {
//        B *= i;
//    }
//
//    for (int i = 1; i <= (N - K); i++) {
//        C *= i;
//    }
//
//    cout << A / (B * C) << "\n";

    return 0;
}
