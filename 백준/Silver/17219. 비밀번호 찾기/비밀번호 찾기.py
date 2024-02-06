imap = {}
Testcase = list(map(int, input().split()))

for _ in range(Testcase[0]):
    address_list = list(map(str, input().split()))
    imap[address_list[0]] = address_list[1]
    
address_key = []
answer = []
for _ in range(Testcase[1]):
    address = input()
    address_key.append(address)
    if address in imap:
        answer.append(imap[address])
    
for i in range(Testcase[1]):
    print(answer[i])