/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 23/05/2026

    Fix the code in the code tab to pass this challenge (only syntax errors).
    Look at the examples below to get an idea of what the function should do.

*/


#include <iostream>

using namespace std;


int squared(int a) 
{
    return a * a;
}

int main()
{
    cout << squared(5) << endl;                       // 25
    cout << squared(9) << endl;                       // 81
    cout << squared(100) << endl;                     // 10_000

    return 0;
}