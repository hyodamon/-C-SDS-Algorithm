#include <iostream>
#include <iomanip>
using namespace std;

int M, K;
int N[51];

int main() { ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> M;

    int sum = 0;
    double answer = 0;

    for (int i = 1; i <= M ; i++) {
        cin >> N[i];
        sum += N[i];
    }

    cin >> K;

    double boonja = 0;
    for (int i = 1; i <= M; i++) {
        double tmp = 1;
        for (int j = 0; j < K; j++) {
            tmp *= N[i] - j;
        }
        boonja += tmp;
    }

    double boonmo = 1;
    for (int i = 0; i < K; i++) {
        boonmo *= sum - i;
    }

    cout << setprecision(10) << boonja / boonmo << "\n";

    return 0;
}