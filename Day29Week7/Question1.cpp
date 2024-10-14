/*You are required to create a basic system to simulate different types of musical instruments using polymorphism. Implement a base class Instrument and two derived classes Piano and Violin. Each instrument can be played in different ways but should share a common interface.

Requirements:

Base Class: Instrument
Methods:
void playSound(): A pure virtual method that will be overridden in derived classes to define how the instrument produces sound.
void display(): A virtual method to display the instrument type. This can be overridden in derived classes.
Derived Class: Piano (inherits from Instrument)
Methods:
void playSound(): Override the method to print "Playing a melodious piano tune."
void display(): Override the method to print "This is a Piano."
Derived Class: Violin (inherits from Instrument)
Methods:
void playSound(): Override the method to print "Playing a classical violin tune."
void display(): Override the method to print "This is a Violin."
Main Functionality:
Create an array of pointers to Instrument objects.
Dynamically allocate Piano and Violin objects and store them in the array.
Use polymorphism to call playSound() and display() methods for each object through the base class pointer.
Ensure proper memory management by deallocating all dynamically allocated objects at the end.*/
#include <iostream>
using namespace std;

class Instrument{
    public:
    virtual void playSound(){

    }
    virtual void display(){

    }
};

class Piano : public Instrument{
    void playSound() override {
        cout << "Playing a melodious piano tune." << endl;
        cout << endl;
    }
    void display() override {
        cout << "This is a piano." << endl;
        cout << endl;
    }
};

class Violin : public Instrument{
    void playSound() override {
        cout << "Playing a classical violin tune." << endl;
        cout << endl;
    }
    void display(){
        cout << "This is a violin." << endl;
        cout << endl;
    }
};

int main(){
    Instrument *arr[5];
    arr[0] = new Piano;
    arr[1] = new Violin;
    for (int i = 0; i < 2; i++){
        arr[i]->display();
        arr[i]->playSound();
    }
    for (int i = 0; i < 2; i++)
        delete arr[i];
    return 0;
}