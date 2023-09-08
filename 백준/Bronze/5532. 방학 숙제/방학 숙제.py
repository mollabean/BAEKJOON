L=int(input())
A=int(input())
B=int(input())
C=int(input())
D=int(input())

E = A//C
F = B//D
if E > F:
    if A % C == 0:
        print(L - E)
    else:
        print(L - 1 - E)
else:
    if B % D == 0:
        print(L - F)
    else:
        print(L - 1 - F)
