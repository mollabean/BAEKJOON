S = input()
alpha = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
for i in range(len(alpha)):
    for j in range(len(S)):
        if S[j] == alpha[i]:
            alpha[i] = S.index(S[j])
            alpha[i] = int(alpha[i])
            break;

for i in range(len(alpha)):
    if type(alpha[i]) == str:
        alpha[i] = -1
print(*alpha)