/* Write a C++ program that takes an integer as input from the user and outputs its square.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The square of " << n << " is: " << n * n;
    return 0;
}