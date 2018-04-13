if __name__ == '__main__':
    t=int(input())
    while(t>0):
        flag = 1
        (n,m) = map(int, input().split())
        pos = dict()
        for i in range(m):
            (a,b) = map(int, input().split())
            l=b-a if a<=b else n+b-a
            while(l>=0 and pos.get(a) is not None):
                r=pos.get(a)
                if r>l:
                    pos[a]=l
                    l=r
                (a,l)=(a+1,l-1)
                if a==n:
                    a=0
            if l>=0:
                pos[a]=l
            else:
                flag = 0
        if flag:
            print("YES")
        else:
            print("NO")
        t=t-1
