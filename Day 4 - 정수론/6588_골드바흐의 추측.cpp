//#include <iostream>
//#include <vector>
//using namespace std;
//
//int che[1000001];
//
//int main() {
//
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    for (int i = 1; i <= 1000001; i++) {
//        che[i] = i;
//    }
//
//    for (int i = 2; i <= 1000001; i++) {
//        if (che[i]) {
//            for (int j = i * 2; j <= 1000001; j += i) {
//                if (che[j] != 0) {
//                    che[j] = 0;
//                }
//            }
//        }
//    }
//
//    while(true) {
//        int num;
//        cin >> num;
//        if (num == 0) {
//            break;
//        }
//
//        for (int i = 3; i <= num; i++) {
//            if (che[i] != 0) {
//                if (che[num - i] != 0) {
//                    cout << num << " = " << i << " + " << num - i << "\n";
//                    break;
//                }
//            }
//        }
//    }
//    return 0;
//}