answer = 1
stack = 0
x = int(input())
while True:
    if x == 0:
        break
    answer = answer * x
    x = x-1

while True:
    if answer % 10 == 0:
        stack+=1
    else:break
    answer //= 10

print(stack)