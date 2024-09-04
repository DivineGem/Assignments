/*Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    int OddNums = 0, EvenNums = 0;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            ++EvenNums;
        else
            ++OddNums;
    }
    cout << "Number of odd numbers: " << OddNums << endl;
    cout << "Number of even numbers: " << EvenNums;
    return 0;
}