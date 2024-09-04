/*Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
Assuming that string contains only lowercase.*/

#include <iostream>
#include <string>
using namespace std;

void checkVowelsConsonants(string s)
{
    int vow = 0, con = 0, i = 0;
    do{
        if (s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117){
            ++vow;
            ++i;
            continue;
        }
        else if (s[i] >= 97 && s[i] <= 122)
            ++con;
        ++i;
    }while(s[i] != '\0');
    cout << "Number of vowels: " << vow << endl;
    cout << "Number of consonants: " << con << endl;
}

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    checkVowelsConsonants(s);
    return 0;
}