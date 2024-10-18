/*Implement Queues using linkedlist.*/
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        this->data = val;
        this->next = NULL;
    }
};

void enqueue(node* &front, node* &rear, int val){
    node* n = new node(val);
    if (front == NULL){
        front = n;
        rear = front;
        return;
    }
    rear->next = n;
    rear = n;
}

void dequeue(node* &front){
    if (front == NULL)
        return;
    node* temp = front;
    front = front->next;
    delete temp;
}

int peek(node* front){
    if (front == NULL)
        return -1;
    return front->data;
}

void display(node* front){
    node* temp = front;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    node* front = NULL;
    node* rear = NULL;
    enqueue(front, rear, 10);
    enqueue(front, rear, 20);
    enqueue(front, rear, 30);
    enqueue(front, rear, 40);
    display(front);
    dequeue(front);
    display(front);
    cout << peek(front) << endl;
    display(front);
    return 0;
}