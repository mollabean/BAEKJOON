import sys
Testcase = int(input())
cnt = 0

while Testcase >= 0:
    if Testcase % 5 == 0:
        cnt += Testcase // 5
        print(cnt)
        break
    Testcase -= 3
    cnt += 1
else:
    print(-1)