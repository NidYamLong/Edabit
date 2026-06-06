/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Create a function that accepts a measurement value in inches and returns 
    the equivalent of the measurement value in feet.

*/

#include <iostream>

using namespace std;

int inchesToFeet(int inches);

int main(void)
{
    cout << inchesToFeet(324) << endl;           // 27
    cout << inchesToFeet(12) << endl;            // 1
    cout << inchesToFeet(36) << endl;            // 3
    cout << inchesToFeet(6) << endl;             // 0
}

int inchesToFeet(int inches)
{
    int feet = 0;

    if (inches >= 12) 
    {
        feet = inches / 12;
    }

    return feet;
}