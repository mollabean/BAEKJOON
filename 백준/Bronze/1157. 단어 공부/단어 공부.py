import sys
S = input()
alpha = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
answer = []
top = 0
for i in range(len(alpha)):
    answer.append(0)

for i in S:
    for j in alpha:
        if(i.upper() == j):
            answer[alpha.index(j)] += 1

for i in answer:
    if i>top:
        top = i
count = 0
for i in range(len(answer)):
    if answer[i] == top:
        count +=1
        if count > 1:
            print('?')
            sys.exit()

print(alpha[answer.index(top)].upper())
