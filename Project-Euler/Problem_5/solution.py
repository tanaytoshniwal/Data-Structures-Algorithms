def gcd(a, b):
    if b==0: return a
    else: return gcd(b, a%b)

def lcm(a, b):
    ans = a*b/gcd(a, b)
    return ans

def main():
    l = 1
    for i in range(1, 21):
        l = lcm(l, i)
    print(l)

if __name__ == '__main__':
    main()