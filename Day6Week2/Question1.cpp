/*Write a C++ program that takes an array as input and prints the sum of the array.*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array: ";
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of the array: " << sum;   
    return 0;
}