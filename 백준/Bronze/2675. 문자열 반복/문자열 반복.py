R = int(input())
for k in range(R):
    S = input().split()
    S[0] = int(S[0])
    for i in range(len(S[1])):
        for j in range(S[0]):
            print(S[1][i], end = '')
    print()        
        
        
