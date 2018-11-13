def is_palindrome(n):
    n = str(n)
    return n == n[::-1]

def main():
    max = 0
    for i in range(999, 99, -1):
        for j in range(999, 99, -1):
            if is_palindrome(i*j):
                if i*j>max:
                    max = i*j
    print(max)

if __name__ == '__main__':
    main()