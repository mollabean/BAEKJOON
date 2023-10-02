Testcase = input()
answer = []
answer.append(Testcase[0])

for i in range(len(Testcase)):
    if Testcase[i] == "-":
        answer.append(Testcase[i+1])
        
print(*answer, sep="")