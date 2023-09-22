Testcase = int(input())
L = input()
Alphabet = "abcdefghijklmnopqrstuvwxyz"
temp = 0
answer = 0
cnt = 0
for i in L:
    for j in Alphabet:
        if i == j:
            temp = Alphabet.index(j) + 1
            answer += ((31 ** cnt) * temp)
            cnt += 1
            break

print(answer)