import sys
List = []
K, N = map(int, input().split())
for i in range(K):
    temp = int(sys.stdin.readline())
    List.append(temp)
    
start = 1
end = max(List)
while start<=end:
    cnt = 0
    middle = (start+end) // 2
    for i in List:
        cnt += i // middle
    if cnt >= N:
        start = middle+1
    else:
        end = middle - 1

print(end)