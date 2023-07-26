N, X = map(int, input().split())
A = list(map(int, input().split()))

Answer = []
for i in range(N):
    if(A[i] < X):
        Answer.append(A[i])

print(*Answer)