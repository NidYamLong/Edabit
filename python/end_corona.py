'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

    Create a function that takes the number of daily average recovered cases 
    recovers, daily average new_cases, current active_cases, and returns the 
    number of days it will take to reach zero cases.

'''

from math import ceil

def end_corona(recovers, new_cases, active_cases) -> int:
    return ceil(active_cases/(recovers - new_cases))


print(end_corona(4_000, 2_000, 77_000))        # 39
print(end_corona(3_000, 2_000, 50_699))        # 51
print(end_corona(30_000, 25_000, 390_205))     # 79