/*Write C++ program that take n from the user the number of elements and insert all the value inside stack after inserting all value inside stack pop all the values and print.*/
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
    int n, u;
    cout << "Enter the size of stack: ";
    cin >> n;
    stack a(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++){
        cin >> u;
        a.push(u);
    }
    for (int i = 0; i < n; i++)
        a.pop();
    return 0;
}