#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node {
public:
    T data;
    Node* next;
};

template <class T>
class Stack {
private:
    Node<T>* head;
    int sz;

public:
    // Constructor
    Stack() {
        head = NULL;
        sz = 0;
    }

    // Create a new node
    Node<T>* createNode(T value) {
        Node<T>* a = new Node<T>();
        a->next = NULL;
        a->data = value;
        sz++;
        return a;
    }

    // Insert value at the head
    void insertAtHead(T value) {
        Node<T>* a = createNode(value);
        if (head == NULL) {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }

    // Delete value from the head
    void deleteAtHead() {
        if (head == NULL)
            return;
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        sz--;
    }

    // Get the top value
    T top() {
        return head->data;
    }

    // Push value onto the stack
    void push(T value) {
        insertAtHead(value);
    }

    // Pop value from the stack
    void pop() {
        deleteAtHead();
    }

    // Print the stack
    void print() {
        Node<T>* temp = head;
        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    // Get the size of the stack
    int getSize() {
        return sz;
    }
};

int main() {
    Stack<int> s1;

    // Push values onto the stack
    s1.push(44);
    s1.push(340);
    s1.push(440);
    s1.push(304);
    s1.push(4);
    s1.push(3);
    s1.push(14);
    s1.push(2);

    cout << "After sorting\n";

    // Stack<int> temp;

    // // Sort the stack
    // while (s1.getSize() > 0) {
    //     int a = s1.top();
    //     s1.pop();

    //     while (temp.getSize() > 0 && temp.top() > a) {
    //         s1.push(temp.top());
    //         temp.pop();
    //     }

    //     temp.push(a);
    // }

    // // Swap temp and s1 to restore sorted stack to s1
    // swap(temp, s1);

    // // Print the sorted stack
    // s1.print();
    Stack<int>temp;
    while(s1.getSize()>0)
    {
        int a=s1.top();
        s1.pop();
        while(temp.getSize() >0 && a<temp.top())
        {       
            s1.push(temp.top());
            temp.pop();

        }
        temp.push(a);

    }

    swap(temp,s1);
    s1.print();
    

    return 0;
}
