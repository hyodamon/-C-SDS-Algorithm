#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int ARRS[4][4000];
int N;

int main() {
    cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 4; j++) {
           cin >> ARRS[j][i];
        }
    }

    vector<int> AB;
    vector<int> CD;

    for (int i = 0; i < N ; i++) {
        for (int j = 0; j < N; j++) {
            AB.push_back(ARRS[0][i] + ARRS[1][j]);
            CD.push_back(ARRS[2][i] + ARRS[3][j]);
        }
    }

    sort(AB.begin(), AB.end());
    sort(CD.begin(), CD.end(), cmp);

    long long answer = 0;

    int i = 0; int j = 0;
    while(i < N*N && j < N*N) {
        cout << "AB[i] : " << AB[i] << " CD[j] : " << CD[j] << " SUM : " << AB[i] + CD[j] << endl;
        if (AB[i] + CD[j] == 0) {
            int Orig = i;
            long long same_AB = 0; long long same_CD = 0;
            while(AB[i] + CD[j] == 0) {
                if(i >= N*N) break;
                same_AB++;
                i++;
            }
            while(AB[Orig] + CD[j] == 0) {
                if(j >= N*N) break;
                same_CD++;
                j++;
            }
            cout << "same_AB : " << same_AB << " Same_CD : " << same_CD << endl;
            answer += same_AB * same_CD;
        } else if (AB[i] + CD[j] > 0) {
            ++j;
        } else {
            ++i;
        }
    }
//
    for(auto v : AB) {
        cout << v << " " ;
    }
    cout << endl;
    for(auto v : CD) {
        cout << v << " ";
    }
    cout << endl;
    cout << answer << endl;
    return 0;
}
