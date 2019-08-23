import math

for _ in range(int(input())):
	n, a, b, k = map(int, input().strip().split(' '))

	count = n//a + n//b - (2*(n//(abs(a*b) // math.gcd(a, b))))
	if count >= k: print("Win")
	else: print("Lose")
