testcase = int(input())
word = []
for i in range(testcase):
    S = input()
    word.append(S)

word = list(set(word))
word.sort()
word.sort(key = len)

for i in word:
    print(i)