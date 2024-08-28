/*Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The sum of the first " << n << " natural numbers is: " << (n * (n + 1)) / 2;
    return 0;
}