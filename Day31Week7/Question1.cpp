/*Given an array, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

More formally,

G[i] for an element A[i] = an element A[j] such that
j is maximum possible AND
j < i AND
A[j] < A[i]
Elements for which no smaller element exist, consider next smaller element as -1.*/
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    stack<int> s;
    for (int i = 0; i < n; i++){
        while(!s.empty() && s.top() >= arr[i])
            s.pop();
        if (s.empty())
            cout << arr[i] << " " << -1 << endl;
        else
            cout << arr[i] << " " << s.top() << endl;
        s.push(arr[i]);
    }
    return 0;
}