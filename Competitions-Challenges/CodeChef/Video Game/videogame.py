n,h=map(int,input().split())
A=list(map(int,input().split()))
T=list(map(int,input().split()))
c=0
j=0
for i in range(len(T)):
    if T[i]==0:
        for k in range(len(A)):
            print(A[k],end=" ")
    if T[i]==1:
        if j>0:
            j-=1
    if T[i]==2:
        if j<(n-1):
            j+=1
    if T[i]==3:
        if A[j]>0 and c==0:
            A[j]=A[j]-1
            c=1
    if T[i]==4:
        if A[j]<h and c==1:
            A[j]+=1
            c=0