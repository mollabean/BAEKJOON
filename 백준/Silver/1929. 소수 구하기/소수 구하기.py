M, N = list(map(int, input().split()))
def prime_list(M, N):
    sieve = [True] * (N+1)
    temp = int(N ** 0.5)
    for i in range(2, temp + 1):
        if sieve[i] == True:
            for j in range(i+i, N+1, i):
                sieve[j] = False
    if M <= 2:
        sieve[1] = False
    return [i for i in range(M, N+1) if sieve[i] == True]

print(*prime_list(M, N), sep = '\n')
#for i in range(len(prime_list(M,N))):
    #print(prime_list(M,N)[i])