/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 23/05/2026

    Create a function that takes voltage and current and returns the calculated power.

*/


#include <iostream>

using namespace std;

int circuitPower(int voltage, int current)
{
    return voltage * current;
}

int main()
{
    cout << circuitPower(230, 10) << endl;                  // 2300
    cout << circuitPower(110, 3) << endl;                   // 330
    cout << circuitPower(480, 20) << endl;                  // 9600

    return 0;
}