/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Create a function that reverses a boolean value.

*/

#include <iostream>

using namespace std;

bool reverse(bool boolean);


int main(void)
{
    cout << boolalpha << reverse(true) << endl;          // false
    cout << boolalpha << reverse(false) << endl;         // true
}

bool reverse(bool boolean)
{
    return not boolean;
}