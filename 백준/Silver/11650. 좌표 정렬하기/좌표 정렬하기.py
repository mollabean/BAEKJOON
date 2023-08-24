testcase = int(input())
array = []
for i in range(testcase):
    x_point, y_point = map(int, input().split())
    array.append((x_point, y_point))

array.sort()
for i in array:
    print(i[0], i[1])
