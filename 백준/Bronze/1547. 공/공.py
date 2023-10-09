Testcase = int(input())
ball = 1
for i in range(Testcase):
    X, Y = map(int, input().split())
    if X == ball:
        ball = Y
        continue
    if Y == ball:
        ball = X
print(ball)