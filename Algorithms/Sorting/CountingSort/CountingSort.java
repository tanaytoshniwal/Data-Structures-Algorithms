import java.util.*;
class CountingSort {
    public static void main(String[] args) throws Exception {
        System.out.print("Input size of the array:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println("Input "+n+" elements:");
        int[] arr=new int[n];
        HashMap<Integer, Integer> count = new HashMap<>();
        for(int i=0;i<10;i++)
            count.put(i, 0);
        for(int i=0;i<n;i++) {
            arr[i]=sc.nextInt();
            count.put(arr[i], count.get(arr[i])+1);
        }
        Arrays.fill(arr, -1);
        for(int a:count.keySet()){
            if(a!=0)
                count.put(a, count.get(a)+count.get(a-1));
            int t=count.get(a);
            while(t-->0){
                if(arr[t]==-1)
                    arr[t]=a;
            }
        }
        System.out.println("Sorted Array:");
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
    }
}
