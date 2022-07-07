#include <iostream>
#include <vector>

using namespace std;

vector<long long int> D;

int main() {
    int N ;
    cin >> N;
    D.push_back(0);
    D.push_back(1);
    D.push_back(1);

    for(int i = 3; i <= N; i++) {
        D.push_back(D[i-1] + D[i-2]);
    }

    cout << D[N] << endl;
}
