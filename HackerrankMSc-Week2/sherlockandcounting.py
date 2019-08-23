import math

def solve(n, k):
    numlist = list(x + 1 for x in range(n - 1))
    print(numlist)
    print(n)
    
    count = 0
    checkvalue = n * k
    for i in range(math.ceil(n-1/2)):
        prod = numlist[i] * numlist[-i]
        if prod <= checkvalue:
            count += 1
            
    return count * 2

result = solve(5, 2)
print (result)