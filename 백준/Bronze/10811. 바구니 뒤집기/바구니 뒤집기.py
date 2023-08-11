N, M = list(map(int, input().split()))
bucket = []
for A in range(1, N+1):
    bucket.append(A)
    
for B in range(M):
    i, j = list(map(int, input().split()))
    temp = bucket[i-1:j]
    temp.reverse()
    bucket[i-1:j] = temp
print(*bucket)