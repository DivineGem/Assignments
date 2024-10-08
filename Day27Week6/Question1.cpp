/*Given an infix expression in the form of string str. Convert this infix expression to postfix expression.*/
#include <iostream>
#include <string>
using namespace std;

class stack{
    public:
    int size;
    char* arr;
    int top;
    stack(int s){
        this->size = s;
        arr = new char[size];
        top = -1;
    }
    void push(char val){
        if (top == size - 1){
            cout << "Stack Overflow" << endl;
            return;
        }
        ++top;
        arr[top] = val;
    }
    void pop(){
        if (top == -1){
            cout << "Stack Underflow" << endl;
            return;
        }
        --top;
    }
    bool isEmpty(){
        return top == -1;
    }
    char peek(){
        return arr[top];
    }
};

bool compareOperand(char a, char b){
    char arr[] = {'^', '/', '*', '+', '-'};
    int ia, ib;
    for (int i = 0; i < 5; i++){
        if (arr[i] == a)
            ia = i;
        if (arr[i] == b)
            ib = i;
    }
    return ia < ib;
}

void conversion(string s){
    stack op(100);
    int size = s.length();
    for (int i = 0; i < size; i++){
        if (s[i] >= 97 && s[i] <= 122)
            cout << s[i];
        else if(s[i] == '('){
            string ns;
            ++i;
            do{
                ns += s[i];
                ++i;
            }while(s[i] != ')');
            conversion(ns);
        }else{
            if (op.isEmpty())
                op.push(s[i]);
            else{
                if (compareOperand(op.peek(), s[i])){
                    cout << op.peek();
                    op.pop();
                    --i;
                }else{
                    op.push(s[i]);
                }
            }
        }
    }
    while(!op.isEmpty()){
        cout << op.peek();
        op.pop();
    }
}

int main(){
    string s;
    cout << "Enter the infix expression: ";
    cin >> s;
    conversion(s);
    return 0;
}