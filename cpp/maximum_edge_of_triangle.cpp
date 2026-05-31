/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 23/05/2026

    Create a function that finds the maximum range of a triangle's third edge, where the side lengths are all integers.

*/

#include <iostream>

using namespace std;

int nextEdge (int side1, int side2)
{
    return (side1 + side2)-1;
}

int main() 
{
    cout << nextEdge(8, 10) << endl;                 // 17
    cout << nextEdge(5, 7) << endl;                  // 11
    cout << nextEdge(9, 2) << endl;                  // 10

    return 0;
}