/*You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.*/
#include <iostream>
using namespace std;

int main(){
    int t;
    cout << "Enter target: ";
    cin >> t;
    cout << "Enter array (End your array with a period (.) ): ";
    int arr[100], size = 0;
    while(cin >> arr[size])
        ++size;
    for (int i = 0; i < size; i++){
        if (arr[i] == t){
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}