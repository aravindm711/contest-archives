n = int(input())
input_string = input()

i = 0
index = 0
output_string = str()
while True:
	if index < n:
		output_string += input_string[index]
		i += 1
		index += i
	else:
		break

print (output_string)