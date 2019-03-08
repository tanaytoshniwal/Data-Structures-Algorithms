n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
c = 0
a.sort()
b.sort()
r1 = a if len(a)>len(b) else b
r2 = a if len(a)<len(b) else b
for i in range(min(n,m)):
    if r1[i]!=r2[i]:
        if r2[i] not in r1:
            c = c+1
        elif r1[i] not in r2:
            c = c+1
for i in range(abs(n-m)):
    if r1[len(r2)+i] not in r2:
        c=c+1
print(c)