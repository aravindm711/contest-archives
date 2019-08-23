def bin_equi(n):
	while n > 0:
		bin_list.append(n % 2)
		n = int(n / 2)
	return bin_list

def print_bin_list():
	print ("YES")
	i = 0
	for x in bin_list:
		while x:
			print ("%d" %(2**i), end = " ")
			x -= 1
		i += 1

n, k = map(int, input().strip().split())

bin_list = []
bin_list = bin_equi(n)

nb = sum(bin_list)
if k >= nb:
	while k > nb:
		power = k - nb + 1
		if power < len(bin_list):
			bin_list[power] -= 1
			bin_list[power - 1] += 2
			nb = sum(bin_list)
		else:
			print ("NO")
			break
else:
	print ('NO')

if k == nb:
	print_bin_list()
	