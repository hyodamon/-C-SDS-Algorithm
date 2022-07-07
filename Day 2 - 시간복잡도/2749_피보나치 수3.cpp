#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<long long>> matrix;

matrix operator * (const matrix& m1, const matrix& m2) {
    int n = m1.size();
    matrix result(n, vector<long long>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
            result[i][j] %= 1000000;
        }
    }
    return result;
}

int main() {
    long long N;
    cin >> N;

    matrix answer = {{1, 0}, {0, 1}};
    matrix base = {{1, 1}, {1, 0}};

    while (N > 0) {
        if(N % 2) {
            answer = answer * base;
        }
        base = base * base;
        N /= 2;
    }

    cout << answer[0][1] << endl;
}
