/*Write a C++ function that takes a string as input and reverses it.*/

#include <iostream>
using namespace std;

void reverseString(char arr[], int size){
    for (int i = size - 1; i >= 0; i--)
        cout << arr[i];
}

int main(){
    char arr[100];
    cout << "Enter a string: ";
    cin >> arr;
    int size = 0;
    do{
        ++size;
    }while(arr[size] != '\0');
    reverseString(arr, size);
    return 0;
}