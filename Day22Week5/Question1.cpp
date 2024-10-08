/*Write C++ program that create a stack using Array.*/
#include <iostream>
using namespace std;


class stack{
    int* arr;
    int size;
    int top;
    public:
    stack(int s){
        this->size = s;
        arr = new int[size];
        top = -1;
    }
    void push(int val){
        if (top == size - 1){
            cout << "Stack overflow" << endl;
            return;
        }
        ++top;
        arr[top] = val;
    }
    void pop(){
        if (top == -1){
            cout << "Stack underflow";
            return;
        }
        cout << arr[top] << " ";
        --top;
    }
};

int main(){
    stack a(3);
    // Pushing till 4 so that we can see the Stack Overflow
    for (int i = 0; i < 4; i++)
        a.push(i + 1);
    // Popping till 4 so that we can see the Stack Underflow
    for (int i = 0; i < 4; i++)
        a.pop();
    return 0;
}