N = int(input())
temp = N
num = 1
cnt = 1
for i in range(1, temp):
    num += 6*i
    cnt += 1
    if N<=num:
        break
    
print(cnt)