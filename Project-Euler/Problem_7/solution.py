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
    prime = 0
    count = 1
    while True:
        prime = prime + 1
        if is_prime(prime):
            count = count + 1
            print(prime)
        if count > 10001:
            break
    print(prime)

if __name__ == '__main__':
    main()