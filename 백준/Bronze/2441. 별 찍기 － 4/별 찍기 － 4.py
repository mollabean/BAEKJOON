Testcase = int(input())

for i in range(Testcase, 0, -1):
    for j in range(Testcase-i, 0, -1):
        print(" ", end = "")
    for k in range(Testcase, Testcase-i, -1):
        print("*", end = "")      
    print()