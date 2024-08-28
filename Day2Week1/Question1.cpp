/*Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, l;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    if (a >= b){
        if (a >= c)
            l = a;
        else
            l = c;
    }else{
        if (b >= c)
            l = b;
        else
            l = c;
    }
    cout << "The largest number is: " << l;
    return 0;
}