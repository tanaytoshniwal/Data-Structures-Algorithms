#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    d = dict()
    for i in ar:
        if d.get(i) is None:
            d[i] = 1
        else:
            d[i] = d.get(i) + 1
    c = 0
    for i in d:
        if d[i]>1:
            c = c + int(d[i]/2)
    return c
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
