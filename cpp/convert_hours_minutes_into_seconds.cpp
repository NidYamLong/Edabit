/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 23/05/2026

    Create a function that takes two integers and checks if they are equal.

*/

#include <iostream>

using namespace std;

int convert(int hours, int minutes)
{
    return hours*(60 * 60) + (minutes * 60);
}

int main()
{
    cout << convert(1, 3) << endl;                   // 3780
    cout << convert(2, 0) << endl;                   // 7200
    cout << convert(0, 0) << endl;                   // 0

    return 0;
}