#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    int *arr;
    int l, r;
    int sz;
    int capacity;

public:
    Queue() {
        arr = new int[1];
        capacity = 1;
        sz = 0;
        l = 0;
        r = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    void remove_circular() {
        if (l > r) {
            int *temp = new int[capacity];
            int idx = 0;

            // Copy elements from l to capacity-1
            for (int i = l; i < capacity; i++) {
                temp[idx++] = arr[i];
            }

            // Copy elements from 0 to r
            for (int i = 0; i <= r; i++) {
                temp[idx++] = arr[i];
            }

            swap(arr, temp);
            l = 0;
            r = idx - 1;

            delete[] temp;
        }
    }

    void increase_cap() {
        remove_circular();
        capacity *= 2;
        int *temp = new int[capacity];

        for (int i = 0; i < sz; i++) {
            temp[i] = arr[i];
        }

        delete[] arr;
        arr = temp;
    }

    void enqueue(int value) {
        if (sz == capacity) {
            increase_cap();
        }
        r = (r + 1) % capacity;
        arr[r] = value;
        sz++;
    }

    void dequeue() {
        if (sz == 0) {
            cout << "Queue is empty\n";
            return;
        }
        l = (l + 1) % capacity;
        sz--;
    }

    void front() {
        if (sz == 0) {
            cout << "Queue is empty\n";
        } else {
            cout << arr[l] << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(45);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(4);
    q.front(); // Outputs the front element

    q.dequeue();
    q.front(); // Outputs the new front element

    return 0;
}
