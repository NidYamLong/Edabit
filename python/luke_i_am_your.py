'''
    Site: https://edabit.com/
    Author: Leonardo Marques Moreira - 31/05/2026

    Luke Skywalker has family and friends. Help him remind them who is who. 
    Given a string with a name, return the relation of that person to Luke.

                |---------------------------------|
                |   Person	    |  Relation       |
                |---------------------------------|
                | Darth Vader	| father          |
                | Leia	        | sister          |
                | Han	        | brother in law  |
                | R2D2	        | droid           |
                |---------------------------------|
'''


def relation_to_luke(name):

    relation = {
        "Darth Vader": "father",
        "Leia": "sister",
        "Han": "brother in law",
        "R2D2": "droid"
    }

    return f'Luke, I am your {relation.get(name, " ")}.'


print(relation_to_luke("Darth Vader"))           # "Luke, I am your father."
print(relation_to_luke("Leia"))                  # "Luke, I am your sister."
print(relation_to_luke("Han"))                   # "Luke, I am your brother in law."