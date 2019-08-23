import copy

n = int(input())
num_list = list(map(int, input().strip().split(" ")))

count = 0
for i in range(n):
	temp_list = copy.deepcopy(num_list)
	temp_list.pop(i)

	count += 1 if (sum(temp_list[j] for j in range(len(temp_list)) if j % 2 == 0) == sum(temp_list[j] for j in range(len(temp_list)) if j % 2 != 0)) else 0
print(count)