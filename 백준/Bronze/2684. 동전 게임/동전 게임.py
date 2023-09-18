Testcase = int(input())
List = ["TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"]
answer = [0, 0, 0, 0, 0, 0, 0, 0]
for i in range(Testcase):
    answer = [0, 0, 0, 0, 0, 0, 0, 0]
    temp = input()
    for j in range(0, 38, 1):
        store = temp[j] + temp[j+1] + temp[j+2]
        for k in List:
            if store == k:
                answer[(List.index(k))] += 1
    print(*answer)
                