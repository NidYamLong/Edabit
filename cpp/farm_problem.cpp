/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 23/05/2026

    In this challenge, a farmer is asking you to tell him how many legs can be counted among all his animals.
    The farmer breeds three species:

     - chickens = 2 legs
     - cows = 4 legs
     - pigs = 4 legs

    The farmer has counted his animals and he gives you a subtotal for each species.
    You have to implement a function that returns the total number of legs of all the animals.

*/

#include <iostream>

using namespace std;

int animals(int chickens, int cows, int pigs)
{
    return 2*(chickens) + 4*(cows + pigs);
}

int main()
{
    cout << animals(2, 3, 5) << endl;                        // 36
    cout << animals(1, 2, 3) << endl;                        // 22
    cout << animals(5, 2, 8) << endl;                        // 50

    return 0;
}