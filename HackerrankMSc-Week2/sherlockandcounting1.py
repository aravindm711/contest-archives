#!/bin/python3

import os
import sys

def checkineq(i):
    return i * (n - i) <= z

for _ in range(int(input())):
    n, k = map(int, input().split(" "))
    midval = n // 2
    z  = n * k
    
    if checkineq(midval):
        print (n - 1)
    else:
        a = 1
        b = midval
        
        while a + 1 < b:
            m = (a + b)//2
            if checkineq(m):
                a = m
            else:
                b = m
        print (a * 2)
