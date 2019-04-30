def main():
    total = 0
    a = 1
    b = 2

    while(a <= 4000000):
        t = a + b
        if a%2 == 0:
            total = total + a
        a = b
        b = t

    print(total)

if __name__ == '__main__':
    main()