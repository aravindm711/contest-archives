withdrawAmount, currBalance = input().split(" ")

withdrawAmount = int(withdrawAmount)
currBalance = float(currBalance)

if (withdrawAmount % 5 != 0) or (withdrawAmount > currBalance):
	print (currBalance)
else:
	temp = float(currBalance - withdrawAmount - 0.5)
	print ("%.2f" %(temp))