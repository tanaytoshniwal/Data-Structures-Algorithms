import java.util.*;
class BinarySearch{
    public static int search(int[] arr, int left, int right, int x){
        if (right>=left){
            int mid = left + (right - left)/2;
            if (arr[mid] == x)
               return mid;
            if (arr[mid] > x)
               return search(arr, left, mid-1, x);
            return search(arr, mid+1, right, x);
        }
        return -1;
    }
    public static void main(String[] args){
        System.out.println("Input size of array:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int arr[] = new int[n];
        System.out.println("Input "+n+" values for array:");
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();

        System.out.println("Input item to be searched:");
        int item = sc.nextInt();

        int index = search(arr, 0, n-1, item);

        if(index == -1)
            System.out.println("Element not found");
        else
            System.out.println("Item: "+item+" found at index: "+index);
    }
}
