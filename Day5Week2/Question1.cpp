/*Write a C++ function that checks whether an integer is odd or even. If the integer is odd, print "Odd"; otherwise, print "Even."*/

#include <iostream>
using namespace std;

void CheckOdd_Even(int a){
    if (a % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    CheckOdd_Even(num);
    return 0;
}