/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 23/05/2026

    Create a function that takes two integers and checks if they are equal.

*/

#include <iostream>

using namespace std;

bool isEqual(int num1, int num2)
{
    return num1 == num2;
}

int main ()
{
    cout << boolalpha << isEqual(5, 6) << endl;                 // 0 - false
    cout << boolalpha << isEqual(1, 1) << endl;                 // 1 - true
    cout << boolalpha << isEqual(36, 35) << endl;               // 0 - false

    return 0;
}