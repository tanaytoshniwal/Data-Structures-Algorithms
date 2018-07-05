import time

def catalan(n):
    if n == 0 or n == 1:
        return 1
    sum = 0
    for i in range(n):
        sum += catalan(i) * catalan(n-i-1)
    return sum

n = int(input())

init = time.time()
for i in range(n):
    print(str(catalan(i)) + ' ', end = "")
fin = time.time()

print("\ntime: " + str(1000 * (fin-init))+"ms")
