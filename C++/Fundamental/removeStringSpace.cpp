/*
Description:
Write a function that removes the spaces from the string, 
then return the resultant string.
Examples (Input -> Output):
*/
#include <iostream>
#include <algorithm>

using namespace std;

string no_space(const string& str) {
    string result;
    for (char c : str) {
        if (c != ' ') result += c;
    }
    return result;
}