/* 
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Take an array of integers (positive or negative or both) and
    return the sum of the absolute value of each element.

*/

#include <iostream>
#include <vector>

using namespace std;

int getAbsSum(vector<int> arr);

int main(void)
{
    cout << getAbsSum({2, -1, 4, 8, 10}) << endl;         // 25
    cout << getAbsSum({-3, -4, -10, -2, -3}) << endl;     // 22
    cout << getAbsSum({2, 4, 6, 8, 10}) << endl;          // 30
    cout << getAbsSum({-1}) << endl;                      // 1
}

int getAbsSum(vector<int> arr)
{
    int sum = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        sum += abs(arr[i]);
    }

    return  sum;
}