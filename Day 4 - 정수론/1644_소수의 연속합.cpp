//#include <iostream>
//
//using namespace std;
//
//int N;
//bool che[4000001];
//int prime[4000001];
//
//int main() {
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> N;
//
//    int cnt = 0;
//    for (int i = 2; i <= N; i++) {
//        if (!che[i]) {
//            prime[cnt++] = i;
//            for (int j = i * 2; j <= N; j += i) {
//                if (!che[j]) {
//                    che[j] = true;
//                }
//            }
//        }
//    }
//
//    int answer = 0;
//    int start = 0;
//    int end = 1;
//
//    if (cnt == 1) {
//        answer = 1;
//    }
//
//    while(end < cnt) {
//        int sum = 0;
//        for (int i = start; i <= end; i++) {
//            sum += prime[i];
//        }
//        if (sum < N) {
//            ++end;
//        } else if (sum > N) {
//            ++start;
//        } else {
//            ++answer;
//            ++end;
//        }
//    }
//
//    cout << answer << "\n";
//
//    return 0;
//}