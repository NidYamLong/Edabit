/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Fix the code in the Code tab so the function returns 
    true if and only if x is equal to 7. Try to debug code and pass all the tests.

*/

#include <iostream>

using namespace std;

bool isSeven(int x);

int main(void)
{
    cout << boolalpha << isSeven(4) << endl;      // false
    cout << boolalpha << isSeven(9) << endl;      // false
    cout << boolalpha << isSeven(7) << endl;      // true
}

bool isSeven(int x)
{
    return x == 7;
}