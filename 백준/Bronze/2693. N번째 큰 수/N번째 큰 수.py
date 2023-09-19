Testcase = int(input())
for i in range(Testcase):
    temp = list(map(int, input().split()))
    temp.sort(reverse=True)
    print(temp[2])

