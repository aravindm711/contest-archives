def computeGCD(x, y):
	while(y):
		x, y = y, x % y

	return x

n = int(input())

a = list(map(int, input().rstrip().split()))

factlist = []
for i in range(3):
	factlist.append(computeGCD(a[i], a[i + 1]))

if factlist[0] == factlist[1]:
	print (factlist[0])
elif factlist[0] == factlist[2]:
	print (factlist[0])
else:
	print (factlist[1])