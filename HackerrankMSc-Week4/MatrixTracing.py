import math

for _ in range(int(input())):
	m,  n = map(int, input().strip().split(" "))

	if n >= m:
		num_list = list(x for x in range(n, n + m - 1))
		den_list = list(x for x in range(2, m))
	else:
		num_list = list(x for x in range(m, n + m - 1))
		den_list = list(x for x in range(2, n))
	
	for i in range(len(den_list)):
		for j in range(len(num_list)):
			if num_list[j] % den_list[i] == 0:
				num_list[j] = int(num_list[j] / den_list[i])
				den_list[i] = 1
				break

	check = 1
	for i in range(len(den_list)): 
		if den_list[i] != 1:
			check = 0
			break

	p = 1000000007
	if check:
		prod = 1
		for i in range(len(num_list)): prod = ((prod % p) * (num_list[i] % p)) % p

		print(prod)
