/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Create a function that takes a number as an argument, add one to the number, and return the result.

*/

#include <iostream>

using namespace std;

int addition(int a);

int main (void)
{
    cout << addition(0) << endl;            // 1
    cout << addition(9) << endl;            // 10
    cout << addition(-3) << endl;           // -2

}

int addition(int a)
{
    return a + 1;
}