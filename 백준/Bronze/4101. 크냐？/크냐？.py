import sys
while True:
    S = list(map(int, input().split()))
    if S[0] == 0 & S[1] == 0:
        sys.exit()
    if S[0] > S[1]:
        print('Yes')
    else:
        print('No')       