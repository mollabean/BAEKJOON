testcase = int(input())
save = []
for i in range(testcase):
    age, name = list(input().split())
    age = int(age)
    save.append((age, name))

save.sort(key = lambda x: x[0])
for i in save:
    print(i[0], i[1])
