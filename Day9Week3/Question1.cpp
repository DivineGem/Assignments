/*Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable. Print the value of the variable using both the variable itself and the pointer.*/
#include <iostream>
using namespace std;

int main(){
    int n = 12307353;
    int *ptr = &n;
    cout << "By variable: " << n << endl;
    cout << "By pointer: " << *ptr << endl;
    return 0;
}