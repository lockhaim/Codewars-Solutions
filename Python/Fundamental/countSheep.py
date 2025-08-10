# Consider an array/list of sheep where some sheep may be missing from their place. 
# We need a function that counts the number of sheep present in the array (true means present).

def count_sheeps(sheep):
    count = 0
    for s in sheep:
        if s:  # means "if s is True"
            count += 1
    return count