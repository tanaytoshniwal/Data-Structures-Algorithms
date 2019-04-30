if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()[:n]))
    freq = dict()
    for i in range(n):
        if arr[i] in freq:
            freq[arr[i]] = freq.get(arr[i])+1
        else:
            freq[arr[i]] = 1
    (li1, li2) = ([0]*(n+1), [0]*(n+1))
    for i in range(n):
        k = freq.get(arr[i])
        if li2[k]==0:
            li2[k]=arr[i]
        while(k>=0 and li1[k]==0):
            li1[k]=arr[i]
            k=k-1
    q=int(input())
    while(q>0):
        (a, b) = map(int, input().split())
        if b>n:
            print(0)
        elif a==0:
            print(li1[b])
        else:
            print(li2[b])
        q=q-1
