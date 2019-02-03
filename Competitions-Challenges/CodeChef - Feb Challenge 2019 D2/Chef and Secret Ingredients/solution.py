def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        li = []
        d = {i:0 for i in list('abcdefghijklmnopqrstuvwxyz')}
        for i in range(n):
            li.append(set(input()))
            for j in li[-1]:
                d[j] = d.get(j) + 1
        c = 0
        for i in d:
            if(d.get(i) == 3):
                c = c+1
        print(c)
        

if __name__ == "__main__":
    main()