n = int(input())
num_list = list(map(int, input().strip().split()))

num_list.pop(num_list.index(max(num_list)))

print (max(num_list) - min(num_list))