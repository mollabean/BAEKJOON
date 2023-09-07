Testcase = int(input())
List = []
for i in range(Testcase):
    M, N = map(int, input().split())
    List.append((M, N))

List.sort(key=lambda x: (x[1], x[0]))
for i in List:
    print(i[0], i[1])