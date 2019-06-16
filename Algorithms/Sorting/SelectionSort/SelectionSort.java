import java.util.*;
class SelectionSort {
    public static int[] selectionSort(int[] arr) {
        for(int i=0;i<arr.length;i++){
            int minIndex=i;
            for(int j=i;j<arr.length;j++)
                if(arr[j]<arr[minIndex])
                    minIndex=j;

            /*swapping*/
            int t = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = t;
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

        arr = selectionSort(arr);

        System.out.println("\nArray after sorting:");
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
