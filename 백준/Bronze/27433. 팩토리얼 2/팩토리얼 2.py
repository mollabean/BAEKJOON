import sys

def factorial(command):
    if command == 0:
        return 1
    else:
        return command * factorial(command-1)
    
command = int(input())
print(factorial(command))