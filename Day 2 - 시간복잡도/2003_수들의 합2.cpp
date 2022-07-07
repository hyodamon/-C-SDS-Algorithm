#include <iostream>
using namespace std;

int N, M;
int A[10000];

int main() {
    cin >> N >> M;


    for(int i = 0; i < N; i++) {``
        cin >> A[i];
    }

    int answer = 0;

    for(int i = 0; i < N; i++) {
        int sum = 0;
        for(int j = i; j < N; j++) {
           sum += A[j];
           if (sum > M) {
               break;
           } else if (sum == M) {
               ++answer;
           }
        }
    }

    cout << answer << endl;
}
