Testcase = int(input())
List = []
answer = []
for i in range(Testcase):
    X,Y = map(int, input().split())
    List.append((X,Y))
    
for i in range(Testcase):
    cnt = 1
    for j in range(Testcase):
        if List[i][0] < List[j][0] and List[i][1] < List[j][1]:
            cnt += 1
    answer.append(cnt)

for i in answer:
    print(i, end = " ")