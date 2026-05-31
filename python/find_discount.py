'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 31/05/2026

    Create a function that takes two arguments: 
    the original price and the discount percentage as 
    integers and returns the final price after the discount.

'''


def dis(price, discount):
    return price - (price * (discount/100))


print(dis(1500, 50))      # 750
print(dis(89, 20))        # 71.2
print(dis(100, 75))       # 25