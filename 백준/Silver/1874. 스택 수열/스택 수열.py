Testcase = int(input())
List = []
answer = []
result = True
cnt = 1

for i in range(Testcase):
    temp = int(input())
    while cnt<=temp:
        List.append(cnt)
        answer.append("+")
        cnt += 1
    
    if List[-1] == temp:
        List.pop()
        answer.append("-")
    else:
        print("NO")
        result = False
        break
        
if result:
    for i in answer:
        print(i)