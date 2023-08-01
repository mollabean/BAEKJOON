for i in range(100):
    try:
        command = input()
        print(command)
    except EOFError:
        break