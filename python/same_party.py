'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

   Create a function that takes a number as input and returns True if the sum 
   of its digits has the same parity as the entire number. Otherwise, return False.

'''

def parity_analysis(num) -> bool:
    number_analysis = not bool(num % 2)
    sum_numbers = 0

    while num > 0:
        digit = num % 10
        sum_numbers += digit
        num //= 10

    sum_analysis = not bool(sum_numbers % 2)

    return number_analysis == sum_analysis


print(parity_analysis(243))        # True
print(parity_analysis(12))         # False
print(parity_analysis(3))          # True