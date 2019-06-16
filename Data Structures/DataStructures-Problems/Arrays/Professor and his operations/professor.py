if __name__ == "__main__":
    n=int(input())
    arr=list(map(int, input().split(' ')[:n]))
    q=int(input())
    while q:
        x,y=map(int, input().split())
        (x,y)=(x-1,y-1)
        for i in range(x,y+1):
            (arr[i],arr[n-i-1])=(arr[n-i-1],arr[i])
        q=q-1
    for i in range(len(arr)):
        print(str(arr[i]), end=" ")
