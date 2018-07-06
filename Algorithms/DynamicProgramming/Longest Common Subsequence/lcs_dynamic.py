def lcs(s1, s2, x, y):

    if arr[x-1][y-1] != -1:
        return arr[x-1][y-1]

    if x==0 or y==0:
        arr[x-1][y-1] = 0
        return 0

    elif s1[x-1] == s2[y-1]:
        arr[x-1][y-1] = 1 + lcs(s1, s2, x-1, y-1)
        return arr[x-1][y-1]

    else:
        arr[x-1][y-1] = max(lcs(s1, s2, x-1, y), lcs(s1, s2, x, y-1))
        return arr[x-1][y-1]

input_string_1 = 'AGGTABPIXIL'
input_string_2 = 'GXTXAYBPXL'

arr = [[-1 for i in range(len(input_string_2))] for i in range(len(input_string_1))]

import time

init = time.time()

print(lcs(input_string_1, input_string_2, len(input_string_1), len(input_string_2)))

end = time.time()

print((end - init) * 1000)
