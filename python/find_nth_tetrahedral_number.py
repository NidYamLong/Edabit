'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    A tetrahedron is a pyramid with a triangular base and three sides. 
    A tetrahedral number is a number of items within a tetrahedron.

    Create a function that takes an integer n and returns the nth tetrahedral number.

'''

def tetra(n) -> int:
    return round((n*(n+1)*(n+2)) / 6)


print(tetra(2))      # 4
print(tetra(5))      # 35
print(tetra(6))      # 56