/*Implement the priority queue using array.*/
#include <iostream>
using namespace std;

class item {
    public:
    int data;
    int priority;
};

void push(item queue[], int& size, int data, int priority){
    ++size;
    if (size == 0){
        queue[size].data = data;
        queue[size].priority = priority;
        return;
    }
    int i = size - 1;
    for(i; i >= 0; i--){
        if (queue[i].priority <= priority){
            ++i;
            for (int j = size; j > i; j--)
                queue[j] = queue[j - 1];
            break;
        }
    }
    queue[i].data = data;
    queue[i].priority = priority;
}

void peek(item queue[], int size){
    cout << queue[0].data << endl;
}

void pop(item queue[], int& size){
    cout << queue[0].data << endl;
    for (int i = 0; i < size; i++)
        queue[i] = queue[i + 1];
    --size;
}

int main(){
    item queue[100];
    int size = -1;
    push(queue, size, 10, 1);
    push(queue, size, 20, 2);
    push(queue, size, 30, 3);
    push(queue, size, 40, 4);
    for (int i = 0; i <= size; i++)
        cout << queue[i].data << " ";
    cout << endl;
    peek(queue, size);
    pop(queue, size);
    for (int i = 0; i <= size; i++)
        cout << queue[i].data << " ";
    cout << endl;
    push (queue, size, 25, 2);
    for (int i = 0; i <= size; i++)
        cout << queue[i].data << " ";
    cout << endl;
    return 0;
}