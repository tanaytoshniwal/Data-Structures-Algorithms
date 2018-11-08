n = int(input())
total = sum(list(map(int, input().split(' '))))
if total == 2*(n-1):
    print('Yes')
else:
    print('No')