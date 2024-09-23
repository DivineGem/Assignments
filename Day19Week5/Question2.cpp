/*Write C++ program that take input from the txt file and then print output inside terminal. Take any txt file by yourself.*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("text2.txt");
    string line;
    while(getline(file, line))
        cout << line << endl;
    file.close();
    return 0;
}