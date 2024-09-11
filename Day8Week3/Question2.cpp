/*Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.*/
#include <iostream>
#include <string>
using namespace std;

int countCharacter(const string &str, char ch){
    int count = 0, i = 0;
    while(str[i++] != NULL)
        if (str[i] == ch)
            ++count;
    return count;
}

int main(){
    cout << "Enter string: ";
    string str1;
    getline(cin, str1);
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    cout << countCharacter(str1, ch);
    return 0;
}