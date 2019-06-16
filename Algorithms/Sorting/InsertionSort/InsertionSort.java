import java.util.*;
class InsertionSort {
    public static int[] insertionSort(int[] arr){
        for(int i=1;i<arr.length;i++){
            int key = arr[i];
            int j = i-1;
            while(j>=0 && key<arr[j]){
                arr[j+1] = arr[j];
                j--;
            }
            j++;
            arr[j] = key;
        }
        return arr;
    }
    public static void main(String[] args) throws Exception {
        System.out.print("Input Array Size:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        System.out.println("Input "+n+" elements:");
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Array before sorting:");
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");

        arr = insertionSort(arr);

        System.out.println("\nArray after sorting:");
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
