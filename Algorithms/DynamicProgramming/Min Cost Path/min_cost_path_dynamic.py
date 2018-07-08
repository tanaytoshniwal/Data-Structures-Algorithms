import sys

def min_cost_path(arr, x, y):

    if memory[x][y] != -1:
        return memory[x][y]

    if x<0 or y<0:
        return sys.maxsize

    elif x==0 and y==0:
        memory[x][y] = arr[x][y]
        return memory[x][y]

    else:
        memory[x][y] = arr[x][y] + min(min_cost_path(arr, x-1, y-1), min_cost_path(arr, x-1, y), min_cost_path(arr, x, y-1))
        return memory[x][y]

input_matrix = [[1, 2, 3], [4, 8, 2], [1, 5, 3]]

memory = [[-1 for i in range(3)] for i in range(3)]

print(min_cost_path(input_matrix, 2, 2))
