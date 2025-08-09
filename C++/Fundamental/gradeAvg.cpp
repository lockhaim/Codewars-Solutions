/*
Complete the function so that it finds the average of the three scores passed to it and returns the letter value associated with that grade.

Numerical Score	Letter Grade
90 <= score <= 100	'A'
80 <= score < 90	'B'
70 <= score < 80	'C'
60 <= score < 70	'D'
0 <= score < 60	'F'
Tested values are all between 0 and 100. Theres is no need to check for negative values or values greater than 100.

*/

char getGrade(int a, int b, int c) {
    double avgScore = (a + b + c) / 3.0; // use 3.0 to ensure floating-point division
    char lettGrade;
  
    if (avgScore >= 90) {
        lettGrade = 'A';
    } else if (avgScore >= 80) {
        lettGrade = 'B';
    } else if (avgScore >= 70) {
        lettGrade = 'C';
    } else if (avgScore >= 60) {
        lettGrade = 'D';
    } else {
        lettGrade = 'F';
    }
  
    return lettGrade;
}