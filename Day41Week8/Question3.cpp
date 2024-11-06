/*Write a recursive function that takes a positive integer and returns the sum of its digits.*/
#include <iostream>
using namespace std;

int digitSum(int n){
    if (n == 0)
        return 0;
    else
        return (n % 10) + digitSum(n / 10);
}

int main(){
    int n;
    cin >> n;
    cout << digitSum(n);
    return 0;
}