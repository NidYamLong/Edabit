'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Create a function that inverts the rgb values of a given tuple.

'''

def color_invert(rgb) -> ():
    (r, g, b) = rgb

    return (255-r, 255-g, 255-b)



print(color_invert((255, 255, 255)))           # (0, 0, 0)
print(color_invert((0, 0, 0)))                 # (255, 255, 255)
print(color_invert((165, 170, 221)))           # (90, 85, 34)