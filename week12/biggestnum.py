from itertools import permutations
#순열

def largest(l):
    lst = []
    for i in permutations(l, len(l)):
        lst.append("".join(map(str,i)))
    return max(lst)
 
print(largest([10, 68, 75, 7, 21, 12]))