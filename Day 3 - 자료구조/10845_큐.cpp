#include <iostream>
#include <vector>

using namespace std;

int T;
vector<int> Queue;

int main() {
    cin >> T;
    string cmd;
    int num;

    for (int i = 0; i < T; i++) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> num;
            Queue.push_back(num);
        } else if (cmd == "pop") {
            if (Queue.empty()) {
                cout << -1 << endl;
            } else {
                cout << Queue[0] << endl;
                Queue.erase(Queue.begin());
            }
        } else if (cmd == "size") {
            cout << Queue.size() << endl;
        } else if (cmd == "empty") {
            cout << Queue.empty() << endl;
        } else if (cmd == "front") {
            if (Queue.empty()) {
                cout << -1 << endl;
            } else {
                cout << Queue.front() << endl;
            }
        } else if (cmd == "back") {
            if (Queue.empty()) {
                cout << -1 << endl;
            } else {
                cout << Queue.back() << endl;
            }
        }
    }
    return 0;
}
