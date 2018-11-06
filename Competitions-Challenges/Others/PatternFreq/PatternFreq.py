def print_mat(mat):
    for i in mat:
        for num in i:
            print(num, end=' ')
        print()

def get_nums(mat, n):
    s = set()
    for i in mat[n]:
        s.add(i)
    return list(s)

def get_freq(mat, n, nums):
    f = [0 for i in nums]
    for i in range(len(nums)):
        for j in mat[n]:
            if nums[i]==j:
                f[i] = f[i] + 1
    return f

def main():
    n = int(input())
    #init
    mat = [[] for i in range(n)]
    mat[0].append(1)
    
    for i in range(1, n):
        nums = get_nums(mat, i-1)
        freq = get_freq(mat, i-1, nums)

        # print(nums)
        # print(freq)

        for j in range(len(nums)):
            mat[i].append(nums[j])
            mat[i].append(freq[j])

    print_mat(mat)

if __name__ == "__main__":
    main()