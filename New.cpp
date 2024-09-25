#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
    string species;
    int age;
    float weight;
    Animal(string s, int a, float w){
        species = s;
        age = a;
        weight = w;
    }
    void displayInfo(){
        cout << "Species: " << species << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << endl;
    }
};

class Mammal: public Animal{
    public:
    string furColor;
    Mammal(string s, int a, float w, string f) : Animal(s, a, w){
        furColor = f;
    }
    void makeSound(string sound){
        cout << species << " " << sound << endl;
    }
};

class Bird: public Animal{
    public:
    float wingSpan;
    Bird(string s, int a, float w, float ws) : Animal(s, a, w){
        wingSpan = ws;
    }
    void fly(){
        cout << species << "is flying with a wingspan of " << wingSpan << " meters" << endl;
    }
};

class Reptile: public Animal{
    public:
    bool isVenomous;
    Reptile(string s, int a, float w, bool iv) : Animal(s, a, w){
        isVenomous = iv;
    }
    void isCrawl(){
        cout << species << "is crawling" << endl;
    }
};

class Lion: public Mammal{
    public:
    int prideSize;
    Lion(string s, int a, float w, string f, int ps) : Mammal(s, a, w, f){
        prideSize = ps;
    }
    void hunt(){
        cout << species << " hunts with its pride of " << prideSize << " members" << endl;
    }
};

class FlyingReptile: public Bird, public Reptile{
    public:
    FlyingReptile(string s, int a, float w, int iv, float ws) : Bird(s, a, w, ws), Reptile(s, a, w, iv){}
    void glide(){
        cout << "Flying reptile is gliding with a wingspan of " << Bird::wingSpan << " meters" << endl;
    }
};

class Elephant: public Mammal{
    public:
    float trunkLength;
    Elephant(string s, int a, float w, string f, int tl): Mammal(s, a, w, f){
        trunkLength = tl;
    }
    void useTrunk(){
        cout << "Elephant uses its trunk to drink water" << endl;
    }
};