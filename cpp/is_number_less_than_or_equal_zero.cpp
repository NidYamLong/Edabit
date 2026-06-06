/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Create a function that takes a number as its only argument and returns true
    if it's less than or equal to zero, otherwise return false.

*/

#include <iostream>

using namespace std;

bool lessThanOrEqualToZero(int num);


int main(void)
{
    cout << boolalpha << lessThanOrEqualToZero(5) << endl;         // false
    cout << boolalpha << lessThanOrEqualToZero(0) << endl;         // true
    cout << boolalpha << lessThanOrEqualToZero(2) << endl;         // false
}

bool lessThanOrEqualToZero(int num)
{
    return num <= 0;
}