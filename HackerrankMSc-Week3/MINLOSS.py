n = int(input())
numlist = list(map(int, input().strip().split(" ")))

numlist1 = numlist.copy()
numlist.sort()

difflist = [numlist[i + 1] - numlist[i] for i in range(n - 1)]
difflist1 = difflist.copy()
difflist1.sort()

i = 0
while i < (n - 2):
	index1 = numlist1.index(numlist[difflist.index(difflist1[i])])
	index2 = numlist1.index(numlist[difflist.index(difflist1[i]) + 1])
	
	if index1 > index2:
		print (difflist1[i])
		break
	else:
		i += 1
