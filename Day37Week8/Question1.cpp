/*You are building a Car class in C++ that simulates a simple car system. The class should encapsulate the following attributes:

brand (string): The car's brand name.
model (string): The car's model name.
year (int): The manufacturing year of the car.
speed (int): The current speed of the car.
The class should provide:

A constructor to initialize the brand, model, and year.
Getters for all attributes.
Setters for speed only (you should not allow external modification of the brand, model, or year).
A method to increaseSpeed(int amount) that increases the current speed by a given amount.
A method to decreaseSpeed(int amount) that decreases the current speed, but the speed should never go below 0.*/
#include <iostream>
#include <string>
using namespace std;

class Car{
    string brand;
    string model;
    int year;
    int speed;
    public:
        Car(string b, string m, int y){
            brand = b;
            model = m;
            year = y;
            speed = 0;
        }
        void increaseSpeed(int amount){
            speed += amount;
        }
        void decreaseSpeed(int amount){
            speed -= amount;
            if (speed < 0)
                speed = 0;
        }
        void displayDetails(){
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
            cout << "Speed: " << speed << endl;
            cout << endl;
        }
};

int main(){
    Car c("Porsche", "911 GT3 RS", 2024);
    c.displayDetails();
    c.increaseSpeed(200);
    c.displayDetails();
    c.decreaseSpeed(100);
    c.displayDetails();
    c.decreaseSpeed(200);
    c.displayDetails();
    return 0;
}