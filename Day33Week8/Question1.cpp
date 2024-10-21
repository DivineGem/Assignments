/*Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.*/
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string str;
    map<char, int> m;
    cout << "Enter the string: ";
    cin >> str;
    int i = 0;
    while(str[i] != '\0'){
        ++m[str[i]];
        ++i;
    }
    i = 0;
    while(str[i] != '\0'){
        int j = 0;
        while(str[j] != '\0'){
            if (m[str[i]] > m[str[j]]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            ++j;
        }
        ++i;
    }
    cout << str;
    return 0;
}