/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Write a function that takes an integer minutes and converts it to seconds.

*/


#include <iostream>

using namespace std;

int triArea(int base, int height);

int main(void)
{
    cout << triArea(3, 2) << endl;               // 3
    cout << triArea(7, 4) << endl;               // 14
    cout << triArea(10, 10) << endl;             // 50
}

int triArea(int base, int height)
{
    return (base * height) / 2; 
}