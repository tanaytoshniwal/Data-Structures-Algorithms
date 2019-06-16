import time

def print_next_fib(index):
    if index == 0:
        return 0
    if index == 1:
        return 1
    return print_next_fib(index-1) + print_next_fib(index-2)

n = int(input())

init = time.time()

for i in range(n):
    print(str(print_next_fib(i)) + " ", end="")

fin = time.time()

print("\ntime: " + str(1000 * (fin-init))+"ms")
