/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.*/
#include <iostream>
using namespace std;

int main(){
    int arr[100];
    cout << "Enter the number of elements in array: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int single = 0;
    for (int i = 0; i < n; i++)
        single ^= arr[i];
    cout << single;
    return 0;
}