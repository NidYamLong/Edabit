'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

   Create a function that takes damage and speed (attacks per second) and 
   returns the amount of damage after a given time

'''


def damage(damage, speed, time) -> int:
    speed_times = {
        "hour": speed * 3600,
        "minute": speed * 60,
        "second": speed
    }

    return damage * speed_times.get(time, 0)


print(damage(40, 5, "second"))           # 200
print(damage(100, 1, "minute"))          # 6000
print(damage(2, 100, "hour"))            # 720_000
