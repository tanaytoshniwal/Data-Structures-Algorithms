def is_funny(str):

    rev = str[::-1]

    i = 1
    j = len(str) - 2

    while(i<=j):

        diff_1 = abs(ord(str[i]) - ord(str[i-1]))
        diff_2 = abs(ord(str[j]) - ord(str[j+1]))

        if diff_1 != diff_2:
            return False

        i = i+1
        j = j-1

    return True

input_string = 'SPNMKH'

print(is_funny(input_string))
