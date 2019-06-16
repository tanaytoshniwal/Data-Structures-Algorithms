def is_prime(prime):
    if prime <= 1:
        return False
    if prime == 2:
        return True
    if prime > 2 and prime%2 == 0:
        return False
    
    import math
    t = math.floor(math.sqrt(prime))
    for i in range(3, 1 + t, 2):
        if prime % i == 0: return False
    return True

def main():
    sum = 0
    for i in range(2000000):
        if is_prime(i):
            sum = sum + i
    print(sum)

if __name__ == '__main__':
    main()