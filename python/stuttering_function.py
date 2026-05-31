'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 31/05/2026

    Write a function that stutters a word as if someone is struggling to read it.
    The first two letters are repeated twice with an ellipsis ... and space after each,
    and then the word is pronounced with a question mark ?.

'''


def stutter(word):
    first_letters = word[:2] + "... "
    return f'{first_letters*2}{word}?'


print(stutter("incredible"))             # "in... in... incredible?"
print(stutter("enthusiastic"))           # "en... en... enthusiastic?"
print(stutter("outstanding"))            # "ou... ou... outstanding?"