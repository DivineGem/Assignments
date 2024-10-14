/*You are tasked with creating a simple vehicle system in C++ using object-oriented programming principles. Implement a base class Vehicle and two derived classes Car and Bike. Each vehicle can perform certain common actions, but they also have specific attributes and methods.

Requirements:

Base Class: Vehicle
Attributes:
string make: The manufacturer of the vehicle.
int year: The year the vehicle was manufactured.
float fuel: The amount of fuel left in the vehicle.
Methods:
void refuel(float amount): Increases the fuel by amount.
void display(): A virtual method that displays the vehicle's details.
Derived Class: Car (inherits from Vehicle)
Attributes:
int doors: Number of doors in the car.
Methods:
void display(): Override the display() method to show car-specific details, including the number of doors.
void openDoors(): A method that prints "Doors are opened."
Derived Class: Bike (inherits from Vehicle)
Attributes:
bool hasCarrier: Indicates whether the bike has a carrier.
Methods:
void display(): Override the display() method to show bike-specific details, including whether it has a carrier.
void kickStart(): A method that prints "Bike kick-started."
Main Functionality:
Create objects of Car and Bike with relevant attributes.
Refuel both vehicles and display their details.
Call their specific methods (openDoors() for Car and kickStart() for Bike).*/
#include <iostream>
using namespace std;

class Vehicle{
    public:
    string make;
    int year;
    float fuel;
    Vehicle(string m, int y, float f){
        make = m;
        year = y;
        fuel = f;
    }
    void refuel(float amount){
        fuel += amount;
    }
    virtual void display(){
        cout << "Manufacturer: " << make << endl;
        cout << "Year: " << year << endl;
        cout << "Fuel: " << fuel << endl;
        cout << endl;
    }
};

class Car : public Vehicle{
    public:
    int doors;
    Car(string m, int y, float f, int d) : Vehicle(m, y, f){
        doors = d;
    }
    void display() override {
        cout << "Manufacturer: " << make << endl;
        cout << "Year: " << year << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Number of doors: " << doors << endl;
        cout << endl;
    }
    void openDoors(){
        cout << "Doors are opened." << endl;
        cout << endl;
    }
};

class Bike : public Vehicle{
    public:
    bool hasCarrier;
    Bike(string m, int y, float f, bool hc) : Vehicle(m, y, f){
        hasCarrier = hc;
    }
    void display() override {
        cout << "Manufacturer: " << make << endl;
        cout << "Year: " << year << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Has Carrier: ";
        if (hasCarrier)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        cout << endl;
    }
    void kickStart(){
        cout << "Bike kick-started." << endl;
        cout << endl;
    }
};

int main(){
    Car c("Bugatti Chiron", 2012, 50, 2);
    Bike b("BMW", 2020, 20, 0);
    c.refuel(10);
    b.refuel(5);
    c.display();
    b.display();
    c.openDoors();
    b.kickStart();
    return 0;
}