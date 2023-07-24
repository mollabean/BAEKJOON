T = int(input())

for _ in range(T):
    a, b = map(int, input().split())
    a = a % 10
    
    if a == 0:
        print(10)
    elif a == 1 or a == 5 or a == 6:
        print(a)
    elif a == 4 or a == 9:
        b = b % 2
        if b == 1:
            print(a)
        else:
            print((a * a) % 10)
    else:
        b = b % 4
        if b == 0:
            print((a**4) % 10 % 10 % 10)
        else:
            print((a**b) % 10 % 10 % 10)

# 수학을 못해서 못 푼 문제인 것 같다. 일의자리 제곱수로 나타나는 특징을 이용하는 것일 생각을 전혀 하지 못했다.



"""
T = int(input())
for i in range(T):
    a, b = input().split()

    a = int(a)
    b = int(b)

    c = int(a**b)
    if c%10 == 0:
        print(10)
    else:
        print(c%10)
"""   
        