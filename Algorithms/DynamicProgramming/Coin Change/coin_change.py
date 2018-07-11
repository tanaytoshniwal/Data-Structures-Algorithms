def count_sol(arr, l, x):

    if x == 0:
        return 1

    if x>0 and l<=0:
        return 0

    if x<0:
        return 0

    return count_sol(arr, l-1, x) + count_sol(arr, l, x - arr[l - 1])

arr = [1, 2, 3]
x = 4
l = len(arr)
print(count_sol(arr, l, x))
