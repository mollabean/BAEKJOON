N, M = list(map(int, input().split()))
bucket = []

for A in range(N):
    bucket.append(0)

for B in range(M):
    i, j, k = list(map(int, input().split()))
    for C in range(i-1, j):
        bucket[C] = k
print(*bucket)