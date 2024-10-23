/*Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.*/
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        this->data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node *n = new node(val);
    if (head == NULL){
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void insertAtEnd(node* &head, int val){
    node *n = new node(val);
    if (head == NULL){
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}

void display(node* head){
    if (head == NULL)
        return;
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void sort(node* &head){
    if (head == NULL)
        return;
    node* odd = head;
    node* even = head->next;
    node* temp = even->next;
    node* evenStart = even;
    bool flag = 0;
    while(temp != nullptr){
        if (flag){
            even->next = temp;
            even = even->next;
        }else{
            odd->next = temp;
            odd = odd->next;
        }
        temp = temp->next;
        flag = !flag;
    }
    odd->next = evenStart;
    even->next = NULL;
}

int main(){
    node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    display(head);
    cout << endl;
    sort(head);
    display(head);
    return 0;
}