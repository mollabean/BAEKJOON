four_two_list = []
result = []

for i in range(10):
    S = int(input())
    S = S % 42
    four_two_list.append(S)

for value in four_two_list:
    if value not in result:
        result.append(value)


print(len(result))