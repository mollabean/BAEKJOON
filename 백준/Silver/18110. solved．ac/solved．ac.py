import sys

def __my_round__(temp):
    if temp - int(temp)>= 0.5:
        return int(temp) + 1
    else: return int(temp)

Testcase = int(sys.stdin.readline().strip())
if Testcase:
    difficulty = []
    for i in range(Testcase):
        temp = int(sys.stdin.readline().strip())
        difficulty.append(temp)

    difficulty.sort()
    A = len(difficulty)
    A = __my_round__(A*0.15)
    if A > 0:
        print(__my_round__(sum(difficulty[A:-A])/len(difficulty[A:-A])))
    else:
        print(__my_round__(sum(difficulty)/len(difficulty)))
else: 
    print(0)