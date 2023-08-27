Testcase = list(map(int, input().split()))

def factorial(N):
    if N > 1:
        return N * factorial(N-1)
    else:
        return 1


answer = factorial(Testcase[0]) / factorial(Testcase[0] - Testcase[1]) /factorial(Testcase[1])
answer = int(answer)
print(answer)