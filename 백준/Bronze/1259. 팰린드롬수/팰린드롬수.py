while True:
    S = input()
    reverse_S = S[::-1]
    if S == '0': break
    if S == reverse_S:
        print('yes')
    elif S != reverse_S:
        print('no')
