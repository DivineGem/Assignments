/*Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    int oddSum = 0, evenSum = 0;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    cout << "Sum of odd numbers: " << oddSum << endl;
    cout << "Sum of even numbers: " << evenSum;
    return 0;
}