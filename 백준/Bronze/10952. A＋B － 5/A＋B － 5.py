while True:
    a, b = input().split()
    if(int(a) == 0 and int(b) == 0): 
        break
    if(int(a) > 10 or int(a) < 0 or int(b) >10 or int(b)<0):
        break
    else: print(int(a)+int(b))