def longest_increasing_subsequence(arr):

    count = 1
    memo = arr[0]

    for i in range(1, len(arr)):
        if arr[i] > memo:
            count = count + 1
            memo = arr[i]
    return count

input_sequence = [10, 22, 9, 33, 21, 50, 41, 60]

print(longest_increasing_subsequence(input_sequence))
