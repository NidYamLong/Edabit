'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 06/06/2026

   Create a function which concatenates the number 7 to the end of every 
   chord in a list. Ignore all chords which already end with 7.

'''

def jazzify(lst) -> []:
    return [letter if "7" in letter else letter + "7" for letter in lst]


print(jazzify(["G", "F", "C"]))                             # ["G7", "F7", "C7"]
print(jazzify(["Dm", "G", "E", "A"]))                       # ["Dm7", "G7", "E7", "A7"]
print(jazzify(["F7", "E7", "A7", "Ab7", "Gm7", "C7"]))      # ["F7", "E7", "A7", "Ab7", "Gm7", "C7"]
print(jazzify([]))                                          # []