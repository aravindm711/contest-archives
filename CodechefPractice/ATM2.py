withdrawAmount, currBalance = input().split(" ")

withdrawAmount = float(withdrawAmount)
currBalance = float(currBalance)

if withdrawAmount % 5 == 0 and withdrawAmount + 0.5 <= currBalance:
	print ("%.2f" % (currBalance - withdrawAmount - 0.5))
else:
	print ("%.2f" % currBalance)