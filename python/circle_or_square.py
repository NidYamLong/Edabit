'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 31/05/2026

    Given the radius of a circle and the area of a square, 
    return True if the circumference of the circle is greater than the square's 
    perimeter and False if the square's perimeter is greater than the circumference of the circle.

'''

from math import pi as PI
from math import sqrt

def circle_or_square(rad, area):
    circum = 2 * PI * rad
    perim = sqrt(area) * 4

    return circum > perim


print(circle_or_square(16, 625))       # True
print(circle_or_square(5, 100))        # False
print(circle_or_square(8, 144))        # True