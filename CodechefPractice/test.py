def Fact(n):
    p = (10**9 + 7)
    if n >= p: 
        return 0    
  
    result = 1
    for i in range(1, n + 1):
        result = (result * i) % p
  
    return result

a = Fact(998)
b = Fact(999)
print((a*b)**(-1) > 0)