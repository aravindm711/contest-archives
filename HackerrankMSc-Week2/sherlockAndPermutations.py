#!/bin/python3

import os
import sys

def range_prod(lo,hi):
    if lo+1 < hi:
        mid = (hi+lo)//2
        return range_prod(lo,mid) * range_prod(mid+1,hi)
    if lo == hi:
        return lo
    return lo*hi

def find_result(n,m):
    if m - 1 < 2 and n < 2:
        a = 1
        b = 1
        c = 1
    elif m - 1 < 2:
        a = 1
        b = range_prod(1, n)
        c = range_prod(n + 1, m + n - 1)
    elif n < 2:
        a = range_prod(1, m - 1)
        b = 1
        c = range_prod(m, m + n - 1)
    else:    
        if m - 1 < n:
            a = range_prod(1, m - 1)
            b = range_prod(m, n) * a
            c = range_prod(n + 1, m + n -1) * b
        elif n < m - 1:
            b = range_prod(1, n)
            a = range_prod(n + 1, m - 1) * b
            c = range_prod(m, m + n - 1) * a
        else:
            a = range_prod(1, n)
            b = a
            c = range_prod(m, m + n - 1) * a

    p = (10**9 + 7)
    den = (a % p * b % p) % p
    num = c % p
    print (den)
    print (num)
    result = (num % p * (den**(-1) % p)) % p

    return result

for _ in range(int(input())):
    n, m = map(int, input().split())
    
    print(int(find_result(n, m)))
    