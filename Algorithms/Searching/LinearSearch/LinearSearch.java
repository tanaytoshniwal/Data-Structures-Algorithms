import java.util.*;
class LinearSearch{
    public static int searchFirstIndex(int[] arr, int item){
        int index = -1;
        for(int i=0;i<arr.length;i++)
            if(arr[i] == item){
                index = i;
                break;
            }
        return index;
    }

    public static int searchLastIndex(int[] arr, int item){
        int index = -1;
        for(int i=arr.length-1;i>=0;i--)
            if(arr[i] == item){
                index = i;
                break;
            }
        return index;
    }

    public static void printAllSearchResults(int[] arr, int item){
        System.out.print("Indices:");
        boolean b=false;
        for(int i=0;i<arr.length;i++)
            if(arr[i] == item){
                System.out.print(" "+i);
                b=true;
            }
        if(!b)
            System.out.println("Item not found");
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

        int firstIndex = searchFirstIndex(arr, item);
        int lastIndex = searchLastIndex(arr, item);

        if(firstIndex == -1)
            System.out.println("Item not found");
        else
            System.out.println("Item: "+item+" found at first index: "+firstIndex);

        if(lastIndex == -1)
            System.out.println("Item not found");
        else
            System.out.println("Item: "+item+" found at last index: "+lastIndex);

        printAllSearchResults(arr, item);
    }
}
