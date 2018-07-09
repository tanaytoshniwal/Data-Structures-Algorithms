import sys

def min_cost_path(arr, x, y):

    memory[0][0] = input_matrix[0][0]

    #first column
    for i in range(1, x+1):
        memory[i][0] = memory[i-1][0] + input_matrix[i][0]

    #first row
    for i in range(1, y+1):
        memory[0][i] = memory[0][i-1] + input_matrix[0][i]

    for i in range(1, x+1):
        for j in range(1, y+1):
            memory[i][j] = input_matrix[i][j] + min(memory[i-1][j-1], memory[i-1][j], memory[i][j-1])

    return memory[x][y]

input_matrix = [[1, 2, 3], [4, 8, 2], [1, 5, 3]]

memory = [[0 for i in range(3)] for i in range(3)]

import time

init = time.time()

print(min_cost_path(input_matrix, 2, 2))

end = time.time()

print((end-init)*1000)
