/*Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.*/
#include <iostream>
using namespace std;
int main()
{
    unsigned grade;
    cout << "Enter the score: ";
    cin >> grade;
    if (grade >= 90)
        cout << "Grade: A";
    else if (grade < 90 && grade >= 80)
        cout << "Grade: B";
    else if (grade < 80 && grade >= 70)
        cout << "Grade: C";
    else if (grade < 70 && grade >= 60)
        cout << "Grade: D";
    else
        cout << "Grade: F";
    return 0;
}