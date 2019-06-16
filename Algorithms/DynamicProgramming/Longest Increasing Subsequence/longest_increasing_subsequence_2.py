def maximum(arr):

    m = arr[0]

    for i in range(len(arr)):
        m = max(m, arr[i])

    return m

def lis(arr):

    sequence = [1 for i in range(len(arr))]

    for i in range(1, len(arr)):
        for j in range(0, i):
            if arr[i] > arr[j]:
                sequence[i] = max(sequence[i], sequence[j] + 1)

    return maximum(sequence)

input_sequence = [10, 22, 9, 33, 21, 50, 41, 60]

print(lis(input_sequence))
