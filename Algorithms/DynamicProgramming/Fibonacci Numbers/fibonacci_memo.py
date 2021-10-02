import time

memo = {1:1, 2:1}

def print_next_fib(n):
    if n not in memo:
        memo[n] = memo[n-1] + memo[n-2]
        return memo[n]
    else:
        return memo[n] 

n = int(input())

start = time.time()
for i in range(1, n+1):
    print(str(print_next_fib(i)), end=" ")
end = time.time()

print("\nTime: " + str(1000 * (end-start))+" ms")