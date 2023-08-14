import sys
testcase = int(input())

for i in range(testcase):
    H, W, N = list(map(int, input().split()))
    if 1>H or H > 99 or 1 > W  or W > 99:
        sys.exit()
    elif 1>N or N > H*W:
        sys.exit()
    A = N%H
    B = N//H + 1
    if A == 0:
        A = H
        B = N//H
    B = str(B)
    A = str(A)
    print(A + B.zfill(2))