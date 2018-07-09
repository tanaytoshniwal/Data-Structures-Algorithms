import sys
def min_cost_path(arr, x, y):

    if x<0 or y<0:
        return sys.maxsize

    elif x==0 and y==0:
        return arr[x][y]

    else:
        return arr[x][y] + min(min_cost_path(arr, x-1, y-1), min_cost_path(arr, x-1, y), min_cost_path(arr, x, y-1))

input_matrix = [[1, 2, 3], [4, 8, 2], [1, 5, 3]]

import time

init = time.time()

print(min_cost_path(input_matrix, 2, 2))

end = time.time()

print((end-init)*1000)
