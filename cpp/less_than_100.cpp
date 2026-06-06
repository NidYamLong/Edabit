/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Given two numbers, return true if the sum of both numbers is less than 100. Otherwise return false.

*/

#include <iostream>

using namespace std;

bool lessThan100(int a, int b);

int main(void)
{
    cout << boolalpha << lessThan100(22, 15) << endl;           // true
    cout << boolalpha << lessThan100(83, 34) << endl;           // false
    cout << boolalpha << lessThan100(3, 77) << endl;            // true

}

bool lessThan100(int a, int b)
{
    return (a + b) <= 100;
}