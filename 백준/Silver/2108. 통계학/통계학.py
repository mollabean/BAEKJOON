from collections import Counter
import math
import sys
input = sys.stdin.readline
Testcase = int(input())
List = []
for i in range(Testcase):
    temp = int(input())
    List.append(temp)
    
List.sort()
print(round(sum(List)/len(List)))
print(List[len(List)//2])

most_count = Counter(List)

if len(List) > 1:
    if most_count.most_common(2)[1][1] == most_count.most_common(2)[0][1]:
        print(most_count.most_common(2)[1][0])
    elif most_count.most_common(2)[1][1] != most_count.most_common(2)[0][1]:
        print(most_count.most_common(2)[0][0])
    
else:
     print(List[0])
    
print(max(List) - min(List))