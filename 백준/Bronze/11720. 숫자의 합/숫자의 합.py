command = input()
number = input()
answer = 0
for i in range(len(number)):
    answer += int(number[i])
    
print(answer)