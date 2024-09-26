/*You are given a binary array. Your task is to find the maximum number of consecutive ones in array.*/
#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = 0;
    int c = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 1)
            ++c;
        else
            c = 0;
        if (c > max)
            max = c;
    }
    cout << max;
    return 0;
}