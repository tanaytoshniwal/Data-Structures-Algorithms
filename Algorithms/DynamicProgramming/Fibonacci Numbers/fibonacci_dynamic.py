import time

def print_next_fib(index):
    if fib_storage[index] != -1:
        return fib_storage[index]
    if index == 0:
        fib_storage[index] = 0
        return 0
    if index == 1:
        fib_storage[index] = 1
        return 1
    fib_storage[index] = print_next_fib(index-1) + print_next_fib(index-2)
    return fib_storage[index]

n = int(input())
fib_storage = [-1 for i in range(n)]

init = time.time()

for i in range(n):
    print(str(print_next_fib(i)) + " ", end="")

fin = time.time()

print("\ntime: " + str(1000 * (fin-init))+"ms")
