/*Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.*/
#include <iostream>
using namespace std;

class Complex{
    public:
        int real;
        int imag;
    void add(int r1, int i1){
        cout << "Sum: " << real + r1 <<(((imag + i1) > 0) ? " + " : " ")<< imag + i1 << "i" << endl;
    }
    void subtract(int r1, int i1){
        cout << "Difference: " << real - r1 << (((imag - i1) > 0) ? " + " : " ") << imag - i1 << "i" << endl;
    }
};
int main(){
    Complex c1, c2;
    cout << "Complex Number 1: ";
    scanf("%d %di", &c1.real, &c1.imag);
    cout << "Complex Number 2: ";
    scanf("%d %di", &c2.real, &c2.imag);
    c1.add(c2.real, c2.imag);
    c1.subtract(c2.real, c2.imag);
    return 0;
}