check_word = 'not'

for i in range(int(input())):
	word_list = list(map(str, input().strip().split(" ")))

	if check_word in word_list:
		print ("Real Fancy")
	else:
		print ("regularly fancy")

	word_list = []