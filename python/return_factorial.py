'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

   Create a function that takes an integer and returns the factorial of that 
   integer. That is, the integer multiplied by all positive lower integers.

'''

def factorial(num) -> int:
    if num == 1 or num == 0:
        return 1
    else:
        return num * factorial(num - 1)


print(factorial(3))               # 6
print(factorial(5))               # 120
print(factorial(13))              # 6_227_020_800