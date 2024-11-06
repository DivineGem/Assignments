/*You are working as a software developer for a company that creates data validation systems. One of the key components of your system is ensuring that data entries with brackets or parentheses are correctly formatted. This involves making sure that every opening parenthesis has a corresponding closing parenthesis and that they are properly nested.

Your task is to write a function that generates all possible valid combinations of parentheses for a given number of pairs.

For example, given n pairs of parentheses, you need to generate all valid sequences of well-formed parentheses. This function will be used to automatically generate test cases for your system to validate different bracketed structures.

Implement a function to generate all combinations of well-formed parentheses.*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void generate(int n, int open, int close, string str, vector<string>& validstr){
    if (open == n && close == n){
        validstr.push_back(str);
        return;
    }
    if (open < n)
        generate(n, open + 1, close, str + "(", validstr);
    if (close < open)
        generate(n, open, close + 1, str + ")", validstr);
}

vector<string> store(int n){
    vector<string> validstr;
    if (n > 0)
        generate(n, 0, 0, "", validstr);
    return validstr;
}

int main(){
    int n = 3;
    vector<string> validstr = store(n);
    for (int i = 0; i < validstr.size(); i++)
        cout << validstr[i] << endl;
    return 0;
}