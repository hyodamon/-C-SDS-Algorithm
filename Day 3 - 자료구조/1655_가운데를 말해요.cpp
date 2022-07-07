#include <iostream>
#include <queue>
using namespace std;

int N;
priority_queue<int> max_pq; // 중간값보다 작은 값들
priority_queue<int, vector<int>, greater<>> min_pq; // 중간값보다 큰 값들

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> N;
    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        if(max_pq.size() == min_pq.size()) { // 중간값 보다 큰값들과 작은 값들의 개수가 같을 때
            max_pq.push(num);
        } else { // 다를 때
            min_pq.push(num);
        }
        if (min_pq.empty()) {
            cout << max_pq.top() << endl;
            continue;
        }
        if(max_pq.top() > min_pq.top()) {
            int n = max_pq.top();
            max_pq.pop();
            int m = min_pq.top();
            min_pq.pop();
            max_pq.push(m);
            min_pq.push(n);
        }
        cout << max_pq.top() << "\n";
    }
    return 0;
}
