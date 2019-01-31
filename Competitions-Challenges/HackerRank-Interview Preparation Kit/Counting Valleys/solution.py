#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    s = list(s)
    c, level = 0, 0
    b = True
    for i in s:
        if(i == 'U'):
            level = level + 1
        elif(i == 'D'):
            level = level - 1
        if level<0 and b:
            b = False
            c = c + 1
        if level>=0:
            b = True
    return c
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
