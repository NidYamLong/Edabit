'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

   Create a function that takes two numbers and a mathematical operator 
   + - / * and will perform a calculation with the given numbers.

'''


def calculator(num1, operator, num2) -> int:

    if operator == "/" and num2 == 0:
        raise ZeroDivisionError("Can't divide by 0")
    
    return int(eval(f"{num1} {operator} {num2}"))


print(calculator(2, "+", 2))              # 4
print(calculator(2, "*", 2))              # 4
print(calculator(4, "/", 2))              # 2
print(calculator(4, "/", 0))              # ZeroDivisionError: Can't divide by 0