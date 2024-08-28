/*Write a C++ program that takes two integers as input and performs the following arithmetic operations:
Addition
Subtraction
Multiplication
Division (ensure that you handle division by zero)
Modulus*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    if (b == 0)
        cout << "Division by zero is not possible.";
    else{
        cout << "Division: " << a / (b * 1.0) << endl;
        cout << "Modulus: " << a % b;
    }
    return 0;
}