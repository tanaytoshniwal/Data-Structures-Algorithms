import java.util.*;
class QuickSort {
    public static int partition(int[] arr, int low, int high){
        int pivot = arr[high];
        int j=low-1;
        for(int i=low;i<high;i++){
            if(arr[i]<=pivot){
                j++;
                int t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
        int t=arr[high];
        arr[high]=arr[j+1];
        arr[j+1]=t;
        return j+1;
    }
    public static void quickSort(int[] arr, int low, int high){
        if(low<high){
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot-1);
            quickSort(arr, pivot+1, high);
        }
    }
    public static void main(String[] args) throws Exception {
        System.out.print("Input Size of the array:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Input "+n+" elements:");
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        quickSort(arr, 0, n-1);
        System.out.println("Sorted array is:");
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
