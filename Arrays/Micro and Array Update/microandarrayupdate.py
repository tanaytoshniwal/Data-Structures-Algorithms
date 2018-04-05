if __name__=="__main__":
    t=int(input())
    while(t>0):
        (n, k) = map(int, input().split())
        li=list(map(int, input().split()[:n]))
        min = 99999999
        for i in range(len(li)):
            if li[i] < min:
                min=li[i]
        if k-min > 0:
            print(k-min)
        else:
            print(0)
        t=t-1
