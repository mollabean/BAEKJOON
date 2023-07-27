N = input()
i = list(map(int, input().split()))

i.sort()
print(i[0])
print(i[len(i)-1])