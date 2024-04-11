#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        this->data = val;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty())
            return -1;
        else {
            int value = top->data;
            Node* temp = top;
            top = top->next;
            delete temp;
            return value;
        }
    }

    int peek() {
        if (isEmpty())
            return -1;
        else {
            return top->data;
        }
    }
};

int main() {
    Stack st;
    st.push(5);
    st.push(1);
    cout << st.peek() << endl;
    return 0;
}
