t = int(input())
while(t):
    n,m = map(int, input().split()[:2])
    arr = list(map(int, input().split()))
    ln = {}
    for i in range(len(arr)):
        if i < n:
            ln[arr[i]] = 1
        else:
            try:
                if(ln[arr[i]] == 1):
                    print('YES')
            except Exception as e:
                print('NO')
        ln[arr[i]] = 1
    t = t-1
