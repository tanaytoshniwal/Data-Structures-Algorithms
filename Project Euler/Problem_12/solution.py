def find_factors(num):
    import math
    temp = math.sqrt(num)
    count = 0
    for i in range(1, int(temp)):
        if num % i == 0:
            count = count + 2
    if int(math.sqrt(temp)**2) == num:
        return count + 1
    return count

def main():
    series = 0
    i = 1
    while True:
        series = series + i
        if find_factors(series) > 500:
            print(series)
            break
        i = i + 1

if __name__ == '__main__':
    main()
    # print(find_factors(76576500))