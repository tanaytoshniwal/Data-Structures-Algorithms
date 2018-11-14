def main():
    sum_of_squares = 0
    square_of_sum = 0
    for i in range(1, 101):
        sum_of_squares = sum_of_squares + i**2
        square_of_sum = square_of_sum + i
    print(square_of_sum**2 - sum_of_squares)

if __name__ == '__main__':
    main()