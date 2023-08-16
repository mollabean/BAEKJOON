Testcase = int(input())
for i in range(Testcase):
    S = input()
    stack = 1
    score = 0
    for j in range(len(S)):
        if S[j] == 'O':
            score += stack
            stack += 1
        else:
            stack = 1
    print(score)