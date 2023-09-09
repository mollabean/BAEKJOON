Testcase = int(input())
count = 0
temp = 0
for i in range(1, Testcase+1):
    count = str(i)
    temp = i
    for j in range(len(count)):
        temp += int(count[j])
        
    if temp == Testcase:
        print(i)
        break
        
    if i == Testcase:
        print(0)
        break