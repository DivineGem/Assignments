/*Write a recursive function to calculate the factorial of a given number n.*/
#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0)
        return 1;
    else
        return factorial(n - 1) * n;
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}