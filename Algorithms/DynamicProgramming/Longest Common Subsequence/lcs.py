def lcs(s1, s2, x, y):

    if x == 0 or y == 0:
        return 0

    elif s1[x-1] == s2[y-1]:
        return 1 + lcs(s1, s2, x-1, y-1)
    else:
        return max(lcs(s1, s2, x, y-1), lcs(s1, s2, x-1, y))

input_string_1 = 'AGGTABPIXIL'
input_string_2 = 'GXTXAYBPXL'

import time

init = time.time()

print(lcs(input_string_1, input_string_2, len(input_string_1), len(input_string_2)))

end = time.time()

print((end - init) * 1000)
