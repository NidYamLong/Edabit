/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 23/05/2026

    Write a function that converts hours into seconds.

*/

#include <iostream>

using namespace std;

int howManySeconds(int hours) 
{
    return hours*(60 * 60);
}


int main()
{
    cout << howManySeconds(2) << endl;                         // 7200
    cout << howManySeconds(10) << endl;                        // 36000
    cout << howManySeconds(24) << endl;                        // 86400

    return 0;
}