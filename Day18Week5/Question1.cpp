/*You are tasked with creating a Person class in C++ that stores details of a person, such as firstName, lastName, and age. The class should:

Have a constructor that takes firstName, lastName, and age as arguments and initializes the member variables.
Include a method getFullName() that returns the full name of the person (a concatenation of firstName and lastName).
Add a method getDetails() that returns the firstName, lastName, and age in a tuple.
Demonstrate the usage of structured bindings to unpack the tuple returned by getDetails().*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
        string firstName;
        string lastName;
        unsigned age;
    Person(){
        cout << "Enter first name: ";
        cin >> this -> firstName;
        cout << "Enter last name: ";
        cin >> this -> lastName;
        cout << "Enter age: ";
        cin >> this -> age;
    }
    string getFullName(){
        return firstName + " " + lastName + "\n";
    }
    tuple<string, string, unsigned>getDetails(){
        return make_tuple(firstName, lastName, age);
    }
};

int main(){
    Person p;
    cout << p.getFullName();
    string f, l;
    unsigned a;
    tie(f, l, a) = p.getDetails();
    cout << "First Name: " << f << endl;
    cout << "Last Name: " << l << endl;
    cout << "Age: " << a << endl;
    return 0;
}