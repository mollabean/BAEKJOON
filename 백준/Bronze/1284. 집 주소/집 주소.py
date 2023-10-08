while(True):
    cnt = 2
    temp = input()
    cnt += (len(temp)*1) - 1
    if temp == '0':
        break
    for i in temp:
        if i == '1':
            cnt += 2
        elif i == '0':
            cnt += 4
        else:
            cnt += 3
            
    print(cnt)
        
    