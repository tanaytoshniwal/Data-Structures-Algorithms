def find(num):
    c=1
    while num > 1:
        c = c+1
        if num%2 < 1:
            num = num/2
        else:
            num = (3*num) + 1
    return c

def main():
    max_len = -1
    res = -1
    for i in range(1000000):
        cur_len = find(i)
        if cur_len > max_len:
            max_len = cur_len
            res = i
    print(res)

if __name__=="__main__":
    main()