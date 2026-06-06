/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Write a function that takes an integer minutes and converts it to seconds.

*/

#include <iostream>

using namespace std;

int convert(int minutes);

int main(void)
{
    cout << convert(5) << endl;           // 300
    cout << convert(3) << endl;           // 180
    cout << convert(2) << endl;           // 120
}

int convert(int minutes)
{
    return minutes * 60;
}