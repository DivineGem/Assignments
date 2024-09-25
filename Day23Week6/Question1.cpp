/*You are given an array of integer and target integer now you have to tell it posible to select two elements from an array such that their sum is equal to target. If it is possible then print YES otherwise print NO.*/
#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n, t;
    bool b = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the target sum: ";
    cin >> t;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == t)
                b = 1;
    if (b)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}