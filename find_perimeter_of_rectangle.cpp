/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 23/05/2026

    Create a function that takes length and width and finds the perimeter of a rectangle.

*/


#include <iostream>

using namespace std;

int findPerimeter(int length, int width)
{
    return 2*(length + width);
}


int main ()
{
    cout << findPerimeter(6, 7) << endl;                      // 26
    cout << findPerimeter(20, 10) << endl;                    // 60
    cout << findPerimeter(2, 9) << endl;                      // 22

    return 0;
}