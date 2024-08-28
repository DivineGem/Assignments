/*Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.*/
#include <iostream>
using namespace std;
int main()
{
    unsigned grade;
    int sum = 0;
    for (int i = 0; i < 5; i++){
        cout << "Enter grade " << i + 1 << " :";
        cin >> grade;
        sum += grade;
    }
    cout << sum / 5.0;
    return 0;
}