'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

   Given a number, return a list containing the two halves of the number.
   If the number is odd, make the rightmost number higher.

'''

def number_split(n) -> []:
    middle_number = int(n/2)

    if n % 2:
        if n > 0:
            return [middle_number, middle_number + 1]
        else:
            return [middle_number - 1, middle_number]
    
    return [middle_number, middle_number]


print(number_split(4))          # [2, 2]
print(number_split(10))         # [5, 5]
print(number_split(11))         # [5, 6]
print(number_split(-9))         # [-5, -4]
