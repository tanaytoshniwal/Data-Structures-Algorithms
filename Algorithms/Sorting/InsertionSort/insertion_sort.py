def insertion_sort(arr):
    
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while(j>=0 and arr[j]>key):
            arr[j+1]=arr[j]
            j = j - 1
        arr[j+1] = key
    
    return arr

def main():
    arr = [6, 5, 8, 9, 3, 1, 4, 7, 2]
    sorted_arr = insertion_sort(arr)
    for i in sorted_arr:
        print(i, end=" ")

if __name__ == "__main__":
    main()