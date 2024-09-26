/*Implement the stack using linkedlist.*/
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        next = NULL;
    }
};

class Stack{
    Node* head = NULL;
    public:
    int size = 0;
    int top = 0;
    void push(int data){
        Node* n = new Node(data);
        if (top == size){
            cout << "Stack Overflow" << endl;
            return;
        }
        n->next = head;
        head = n;
        ++top;
    }
    void pop(){
        cout << head->data << endl;
        Node* temp = head;
        head = head->next;
        delete temp;
        --top;
    }
    void peek(){
        cout << head->data << endl;
    }
    bool isEmpty(){
        return head == NULL;
    }
};

int main(){
    Stack s;
    cout << "Enter the size of stack: ";
    cin >> s.size;
    for (int i = 0; i < s.size + 1; i++)
        s.push(i + 1);
    s.peek();
    for (int i = 0; i < s.size; i++)
        s.pop();
    cout << s.isEmpty();
    return 0;
}