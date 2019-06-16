def edit(s1, s2, x, y):

    if x==0:
        return y

    if y==0:
        return x

    if s1[x-1] == s2[y-1]:
        return edit(s1, s2, x-1, y-1)

    return min(edit(s1, s2, x-1, y), edit(s1, s2, x, y-1), edit(s1, s2, x-1, y-1)) + 1

input_string_1 = 'sunday'
input_string_2 = 'saturday'

import time
init = time.time()
print(edit(input_string_1, input_string_2, len(input_string_1), len(input_string_2)))
fin = time.time()

print((fin-init)*1000)
