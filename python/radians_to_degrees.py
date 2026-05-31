'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 31/05/2026

    Create a function that takes an angle in radians and returns the 
    corresponding angle in degrees rounded to one decimal place.

'''


from math import pi as PI


def radians_to_degrees(rad):
    return round(rad * (180/PI), 1)


print(radians_to_degrees(1))     # 57.3
print(radians_to_degrees(20))    # 1145.9
print(radians_to_degrees(50))    # 2864.8