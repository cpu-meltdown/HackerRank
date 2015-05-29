import math

def permutationsOfPal(s):
    k = list(s)
    num_spt = (len(k)/2)
    denominator = 1
    for i in set(k):
        if k.count(i) % 2 == 0:
            denominator *= math.factorial((k.count(i)/2))
        else:
            denominator *= math.factorial((k.count(i) - 1)/2)
    return ((math.factorial(num_spt)/ denominator) % ((10**9) + 7))
    
    
    
    
s = [str(i) for i in raw_input()]
print permutationsOfPal(s)