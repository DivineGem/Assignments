/*You are tasked with designing a Shape system that can handle different types of shapes (e.g., Circle, Rectangle) in C++. The system should use abstraction to define a common interface for all shapes and allow for flexibility in handling various shape types.

Your task is to:

Create an abstract class named Shape with the following:

A pure virtual method area() that returns the area of the shape.
A pure virtual method perimeter() that returns the perimeter of the shape.
Implement two derived classes:

Circle: This class should have a private attribute radius and implement the area() and perimeter() methods.
Rectangle: This class should have private attributes width and height and implement the area() and perimeter() methods.
In the main function, create objects of Circle and Rectangle, and print their areas and perimeters using the abstract class interface.*/
#include <iostream>
using namespace std;

class Shape{
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;
};

class Circle: public Shape{
    private:
        double radius;
    public:
        Circle(double r){
            radius = r;
        }
        double area(){
            return 3.14 * radius * radius;
        }
        double perimeter(){
            return 2 * 3.14 * radius;
        }
};

class Rectangle: public Shape{
    private:
        double width;
        double height;
    public:
        Rectangle(double w, double h){
            width = w;
            height = h;
        }
        double area(){
            return width * height;
        }
        double perimeter(){
            return 2 * (width + height);
        }
};

int main(){
    Circle c(10);
    Rectangle r(10, 20);
    Shape* sc = &c;
    Shape* sr = &r;
    cout << "Circle:" << endl;
    cout << "Area: " << sc->area() << endl;
    cout << "Perimeter: " << sc->perimeter() << endl;
    cout << endl;
    cout << "Rectangle:" << endl;
    cout << "Area: " << sr->area() << endl;
    cout << "Perimeter: " << sr->perimeter() << endl;
    return 0;
}