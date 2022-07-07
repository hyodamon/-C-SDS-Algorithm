#include <iostream>
using namespace std;
int T;

int heap[100000];
int heap_size = 0;

void swap (int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void push(int data) {
    heap[++heap_size] = data;
    int child = heap_size;
    int parent = child / 2;

    while(child > 1 && heap[parent] < heap[child]) {
        cout << "child : "  << child << " parent : " << parent << endl;
        swap(&heap[parent], &heap[child]);
        child = parent;
        parent = child / 2;
    }
}

int pop() {
    int result = heap[1];
    swap(&heap[1], &heap[heap_size]);
    heap_size--;
    int parent = 1;
    int child = parent * 2;
    if (child + 1 <= heap_size) {
        child = (heap[child] > heap[child + 1]) ? child : child + 1;
    }
    while (child <= heap_size && heap[parent] < heap[child]) {
        swap(&heap[parent], &heap[child]);
        parent = child;
        child *= 2;
        if (child + 1 <= heap_size) {
            child = (heap[child] > heap[child + 1]) ? child : child + 1;
        }
    }

    return result;
}


int main() {

    cin >> T;
    int num;
    for (int i = 0; i < T; i++) {
        cin >> num ;
        if (num == 0) {
            if (heap_size > 0) {
                cout << heap[heap_size] << endl;
                pop();
            } else {
                cout << 0 << endl;
            }
        } else {
            push(num);
            cout << "num : " << num << endl;
            for(int j = 1; j <= heap_size; j++) {
                cout << heap[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
