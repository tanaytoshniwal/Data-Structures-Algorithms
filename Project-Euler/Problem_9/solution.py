def main():
    total = 1000
    for a in range(1, 1000):
        for b in range(a+1, 1000):
            c = total - a - b
            if a**2 + b**2 == c**2:
                print(a*b*c)

if __name__ == '__main__':
    main()