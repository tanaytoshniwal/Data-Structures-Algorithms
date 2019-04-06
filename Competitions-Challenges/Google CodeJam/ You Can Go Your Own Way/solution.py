t = int(input())
for case in range(t):
    n = int(input())
    lydia = input()
    lydia = lydia.replace('S', '-')
    lydia = lydia.replace('E', 'S')
    lydia = lydia.replace('-', 'E')
    print('Case #{0}: {1}'.format(case+1, lydia))