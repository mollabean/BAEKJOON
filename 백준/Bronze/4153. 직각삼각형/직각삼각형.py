while(True):
    list_num = list(map(int, input().split()))
    list_num.sort()
    if list_num[0] == 0 and list_num[1] == 0 and list_num[2] == 0 :
        break
    if list_num[0]**2 + list_num[1]**2 == list_num[2]**2:
        print('right')
    else:
        print('wrong')