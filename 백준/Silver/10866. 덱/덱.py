from collections import deque
import sys

d = deque()

def push_front(X):
    d.appendleft(X)
    return

def push_back(X):
    d.append(X)
    return

def pop_front():
    if len(d) == 0:
        print(-1)
        return
    print(d[0])
    d.popleft()
    return
        
def pop_back():
    if len(d) == 0:
        print(-1)
        return
    print(d[len(d) - 1])
    d.pop()
    return

def size():
    print(len(d))
    return

def empty():
    if len(d) == 0:
        print(1)
    else: print(0)
    return

def front():
    if len(d) == 0:
        print(-1)
        return
    print(d[0])
    return

def back():
    if len(d) == 0:
        print(-1)
        return
    print(d[len(d) - 1])
    return

testcase = int(input())
for i in range(testcase):
    S = list(sys.stdin.readline().split())
    if S[0] == 'push_front':
        push_front(S[1])
    elif S[0] == 'push_back':
        push_back(S[1])
    elif S[0] == 'pop_front':
        pop_front()
    elif S[0] == 'pop_back':
        pop_back()
    elif S[0] == 'size':
        size()
    elif S[0] == 'empty':
        empty()
    elif S[0] == 'front':
        front()
    elif S[0] == 'back':
        back()
