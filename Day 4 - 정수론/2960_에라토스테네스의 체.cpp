//#include <iostream>
//
//using namespace std;
//
//int N, K;
//int sosu[1001];
//
//int main() {
//    int cnt = 0;
//    cin >> N >> K;
//
//    for(int i = 2; i <= N; i++) {
//       sosu[i] = i;
//    }
//
//    for(int i = 2; i <= N; i++) {
//        for (int j = i; j <= N; j += i) {
//            if (sosu[j] != 0) {
//                sosu[j] = 0;
//                ++cnt;
//            }
//
//            if (cnt == K) {
//                cout << j << endl;
//                return 0;
//            }
//        }
//    }
//
//    return 0;
//}