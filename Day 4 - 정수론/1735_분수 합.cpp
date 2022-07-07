//#include <iostream>
//
//using namespace std;
//
//int A[2];
//int B[2];
//
//int GCD(int n1, int n2) {
//    if (n1 < n2) {
//        int tmp;
//        tmp = n1;
//        n1 = n2;
//        n2 = tmp;
//    }
//
//    if (n1 % n2) {
//        return GCD(n2, n1 % n2);
//    }
//    return n2;
//}
//
//int LCM(int n1, int n2) {
//    return (n1 * n2) / GCD(n1, n2);
//}
//
//int main() {
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    for(int i = 0; i < 2; i++) {
//        cin >> A[i] >> B[i];
//    }
//
//    int boonmo = LCM(B[0], B[1]);
//    int boonja = (boonmo / B[0]) * A[0] + (boonmo / B[1]) * A[1];
//    int yakboon = GCD(boonmo, boonja);
//
//    boonmo /= yakboon;
//    boonja /= yakboon;
//
//    cout << boonja  << " " << boonmo << endl;
//
//    return 0;
//}
