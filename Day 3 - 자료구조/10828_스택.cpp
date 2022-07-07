#include <iostream>
#include <string>
#include <stack>
using namespace std;

int T;
stack<int> Stack;

int main() {
    cin >> T;
    string cmd;
    for(int i =0; i < T; i++) {
        cin >> cmd;
        if (cmd == "push") {
            int num;
            cin >> num;
            Stack.push(num);
        } else if(cmd == "pop") {
            if (Stack.empty()) {
                cout << -1 << endl;
            } else {
                cout << Stack.top() << endl;
                Stack.pop();
            }
        } else if(cmd == "size") {
            cout << Stack.size() << endl;
        } else if(cmd == "empty") {
            cout << Stack.empty() << endl;
        } else if(cmd == "top") {
            if (Stack.empty()) {
                cout << -1 << endl;
            } else {
                cout << Stack.top() << endl;
            }
        }
    }
}
