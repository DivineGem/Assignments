/*In an array, the next greater element for a given element x is defined as the first element to the right of x that is larger than x.

You are provided with two distinct 0-indexed integer arrays, nums1 and nums2, where nums1 is a subset of nums2.

For each element in nums1, find its corresponding position in nums2, and then identify the next greater element that appears to the right of it in nums2. If no such element exists, return -1 for that element.

Your task is to return an array ans, where each element ans[i] represents the next greater element for nums1[i] as found in nums2. If no next greater element is found, the corresponding entry in ans should be -1. Note all the required input from the user.*/
#include <iostream>
#include <stack>
#include <map>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter the size of first array: ";
    cin >> n1;
    int *arr1 = new int[n1];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "Enter the size of second array: ";
    cin >> n2;
    int *arr2 = new int[n2];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    map<int, int> m;
    stack<int> s;
    for (int i = 0; i < n2; i++){
        while(!s.empty() && s.top() < arr2[i]){
            m[s.top()] = arr2[i];
            s.pop();
        }
        s.push(arr2[i]);
    }
    while(!s.empty()){
        m[s.top()] = -1;
        s.pop();
    }
    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " " << m[arr1[i]] << endl;
    return 0;
}