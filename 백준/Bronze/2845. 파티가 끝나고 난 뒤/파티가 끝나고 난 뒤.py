Testcase = list(map(int, input().split()))
List = list(map(int, input().split()))
answer = []
right = Testcase[0] * Testcase[1]
for i in List:
    answer.append(i-right)
    
print(*answer, sep = " ")