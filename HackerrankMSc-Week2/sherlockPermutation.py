def Fact(n):
    if n >= p: 
        return 0    
  
    result = 1
    for i in range(1, n + 1):
        result = (result * i) % p
  
    return result

def power(x, y): 
    res = 1
    x = x % p

    while (y > 0):
        if (y & 1): 
            res = (res * x) % p

        y = y >> 1
        x = (x * x) % p;
      
    return res 

p = (10**9 + 7)
for _ in range(int(input())):
    n, m = map(int, input().split())
    
    c = Fact(n + m - 1)
    b = Fact(m - 1)
    a = Fact(n)
    result = (c * power(a*b, p - 2)) % p

    print (int(result))