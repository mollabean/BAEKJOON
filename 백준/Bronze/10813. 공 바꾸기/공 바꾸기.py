N, M = list(map(int, input().split()))
bucket = []
for A in range(1, N+1):
    bucket.append(A)
    
for B in range(M):
    i, j = list(map(int, input().split()))
    bucket[j-1], bucket[i-1] = bucket[i-1], bucket[j-1]
    
print(*bucket)