import java.util.*;
class MergeSort {
    public static int[] merge(int[] arr, int l, int m, int r) {
        int n1 = m-l+1;
        int n2 = r-m;
        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];
        for(int i=0;i<n1;i++)
            arr1[i] = arr[l+i];
        for(int i=0;i<n2;i++)
            arr2[i] = arr[m+1+i];
        int i = 0, j = 0, k = l;
        while(i<n1 && j<n2)
            if(arr1[i]<arr2[j])
                arr[k++] = arr1[i++];
            else
                arr[k++] = arr2[j++];
        while(i<n1)
            arr[k++]=arr1[i++];
        while(j<n2)
            arr[k++]=arr2[j++];
        return arr;
    }
    public static int[] mergeSort(int[] arr, int l, int r) {
        if(l<r){
            int m = (l+r)/2;
            arr = mergeSort(arr, l, m);
            arr = mergeSort(arr, m+1, r);
            arr = merge(arr, l, m, r);
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

        arr = mergeSort(arr, 0, arr.length-1);

        System.out.println("\nArray after sorting:");
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
