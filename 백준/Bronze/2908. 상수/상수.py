first, second = input().split()

first = first[::-1]
second = second[::-1]

first = int(first)
second = int(second)

if first<second:
    print(second)
else:
    print(first)