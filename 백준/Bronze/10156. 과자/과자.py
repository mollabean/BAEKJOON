List = list(map(int, input().split()))

if (List[0]*List[1]) > List[2]:
    print((List[1]*List[0])-List[2])
else:
    print(0)