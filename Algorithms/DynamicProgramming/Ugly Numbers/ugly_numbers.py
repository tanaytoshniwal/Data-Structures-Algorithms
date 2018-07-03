n = int(input())
ugly_numbers = []

ugly_numbers.append(1)

p2 = p3 = p5 = 0

next2 = ugly_numbers[p2] * 2
next3 = ugly_numbers[p3] * 3
next5 = ugly_numbers[p5] * 5

for i in range(n-1):

    ugly_numbers.append(min(next2, next3, next5))

    if ugly_numbers[-1] == next2:
        p2 = p2 + 1
        next2 = ugly_numbers[p2] * 2
    if ugly_numbers[-1] == next3:
        p3 = p3 + 1
        next3 = ugly_numbers[p3] * 3
    if ugly_numbers[-1] == next5:
        p5 = p5 + 1
        next5 = ugly_numbers[p5] * 5

print(ugly_numbers[-1])
