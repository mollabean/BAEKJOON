import sys
input=sys.stdin.readline

N = int(input())
num = []

for i in range(N):
    num.append(int(input()))

for i in sorted(num):
    print(i)