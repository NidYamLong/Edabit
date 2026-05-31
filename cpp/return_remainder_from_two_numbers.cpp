/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 23/05/2026

    There is a single operator in C++, capable of providing the remainder of a division operation.
    Two numbers are passed as parameters.
    The first parameter divided by the second parameter will have a remainder, possibly zero. Return that value.

*/

#include <iostream>

using namespace std;

int remainder(int x, int y)
{
    return x % y;
}

int main()
{
    cout << remainder(1, 3) << endl;                   // 1
    cout << remainder(3, 4) << endl;                   // 3
    cout << remainder(-9, -45) << endl;                // -9
    cout << remainder(5, 5) << endl;                   // 0

    return 0;
}