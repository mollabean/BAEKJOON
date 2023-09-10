import sys
Testcase = int(input())
answer = 0
for i in range(Testcase):
    temp = int(sys.stdin.readline())
    if i != Testcase-1:
        answer += temp-1
    else:
        answer += temp
        
print(answer)