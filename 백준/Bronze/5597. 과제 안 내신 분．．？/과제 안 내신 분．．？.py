students = [i for i in range(1,31)]

for _ in range(28):
    command = int(input())
    students.remove(command)

print(min(students))
print(max(students))