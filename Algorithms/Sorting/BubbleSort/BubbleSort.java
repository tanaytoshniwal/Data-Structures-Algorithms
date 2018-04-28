import java.util.*;
class BubbleSort{
    public static int[] bubbleSort(int[] arr){
        for(int i=0;i<arr.length-1;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]>arr[j]){
                    int t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }
        return arr;
    }
    public static void main(String[] args) {
        System.out.println("Input size of array:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int arr[] = new int[n];
        System.out.println("Input "+n+" values for array:");
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();

        System.out.println("Array Elements are:");
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
        System.out.println("\nSorted Array is:");
        arr = bubbleSort(arr);
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
