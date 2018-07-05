import time

def catalan(n):
    if catalan_storage[n] != -1:
        return catalan_storage[n]
    if n == 0 or n == 1:
        catalan_storage[0] = catalan_storage[1] = 1
        return 1

    sum = 0
    for i in range(n):
        sum += catalan(i) * catalan(n-i-1)
    catalan_storage[n] = sum
    return sum

n = int(input())

catalan_storage = [-1 for i in range(n)]
init = time.time()
for i in range(n):
    print(str(catalan(i)) + ' ', end = '')
fin = time.time()

print("\ntime: " + str(1000 * (fin-init))+"ms")
