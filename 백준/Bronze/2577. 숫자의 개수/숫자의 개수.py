A = int(input())
B = int(input())
C = int(input())
compare = '0123456789'
answer = []
for i in range(10):
    answer.append(0)

score = A*B*C
score = str(score)
for i in range(10):
    for j in range(len(score)):
        if compare[i] == score[j]:
            answer[i] += 1

print(*answer, sep = '\n')