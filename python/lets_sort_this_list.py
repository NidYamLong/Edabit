'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

   Create a function that takes a list of numbers lst, a string s and 
   return a list of numbers as per the following rules:

    - "Asc" returns a sorted list in ascending order.
    - "Des" returns a sorted list in descending order.
    - "None" returns a list without any modification.

'''

def asc_des_none(lst, s) -> []:
    match s:
        case "Asc":
            return sorted(lst)
        case "Des":
            return sorted(lst, reverse=True)
        case _:
            return lst


print(asc_des_none([4, 3, 2, 1], "Asc" ))              # [1, 2, 3, 4]
print(asc_des_none([7, 8, 11, 66], "Des"))             # [66, 11, 8, 7]
print(asc_des_none([1, 2, 3, 4], "None"))              # [1, 2, 3, 4]