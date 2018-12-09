import math

def main():
    n = 20

    result = math.factorial (2 * n) // (math.factorial (n) ** 2)

    print(result)

if __name__=='__main__':
    main()