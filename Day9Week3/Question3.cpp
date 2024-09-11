/*Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.*/
#include <iostream>
using namespace std;

int main(){
    int n = 12307353;
    int *ptr1 = &n;
    int **ptr2 = &ptr1;
    cout << "Variable: " << n << endl;
    cout << "Pointer to variable: " << *ptr1 << endl;
    cout << "Pointer to pointer: " << **ptr2;
    return 0;
}