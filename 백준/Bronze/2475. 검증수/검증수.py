S = list(map(int, input().split()))
M = []
answer = 0
for i in S:
    temp = i**2
    answer += temp
    
answer = answer % 10
print(answer)
    