/*Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.*/
#include <iostream>
using namespace std;
int main()
{
    char str1[100], str2[100];
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    cout << "Concatenated string: " << str1 << str2 << endl;
    return 0;
}