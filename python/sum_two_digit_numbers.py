'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

   For this challenge, you are supposed to find the sum of the digits of a two-digit 
   number. Sounds easy, right? But for this challenge, I expect you to find
   the sum of the digits mathematically.

    Sure, you can convert the number into a string and then manipulate it so it
    returns the sum of the digits, but the point of this challenge is to see if you
    know how to return the sum of the digits of a two-digit number mathematically.

'''


def two_digit_sum(n) -> int:
    first_digit = n // 10
    last_digit = n % 10

    return first_digit + last_digit;


print(two_digit_sum(45))          # 9
print(two_digit_sum(38))          # 11
print(two_digit_sum(67))          # 13