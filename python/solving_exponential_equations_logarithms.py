'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Create a function that takes a number a and finds the missing exponent x
    so that a when raised to the power of x is equal to b.

'''

from math import log

def solve_for_exp(a, b) -> int:
    return round(log(b) / log(a))


print(solve_for_exp(4, 1024))                     # 5
print(solve_for_exp(2, 1024))                     # 10
print(solve_for_exp(9, 3_486_784_401))            # 10
