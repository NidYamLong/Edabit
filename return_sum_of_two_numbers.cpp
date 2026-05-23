/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 23/05/2026

    Create a function that takes two numbers as arguments and returns their sum.

*/

#include <iostream>

using namespace std;


int addition(int a, int b)
{
    return a + b;
}


int main() 
{
    cout << addition(3, 2) << endl;                      // 5
    cout << addition(-3, -6) << endl;                    // -9
    cout << addition(7, 3) << endl;                      // 10

    return 0;
}