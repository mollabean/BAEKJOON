List = []
for i in range(5):
    temp = int(input())
    if temp < 40:
        temp = 40
    List.append(temp)
    
answer = sum(List)//5
print(answer)