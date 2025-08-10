/*
Description:
Your task is to make two functions ( max and min, or maximum and minimum, 
etc., depending on the language ) that receive a list of integers as input, 
and return the largest and lowest number in that list, respectively. Each 
function returns one number.
*/

#include <vector>
using namespace std;

int min(vector<int> list) {
    int num = list[0];  
    for (int i = 1; i < list.size(); i++) {
        if (list[i] < num) {
            num = list[i];
        }
    }
    return num;
}

int max(vector<int> list) {
    int num = list[0];
    for (int i = 1; i < list.size(); i++) {
        if (list[i] > num) {
            num = list[i];
        }
    }
    return num;
}