t = int(input())

def find_four(a):
    res = ''
    for i in a:
        if i == '4':
            res = res + '1'
        else:
            res = res + '0'
    return res

for case in range(t):
    a = input()
    k = find_four(a)
    print('Case #{0}: {1} {2}'.format(case+1, int(a)-int(k), int(k)))