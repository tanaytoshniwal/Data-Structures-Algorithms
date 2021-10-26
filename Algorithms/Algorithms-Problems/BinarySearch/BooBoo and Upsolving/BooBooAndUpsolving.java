import java.util.*;
class TestClass {
    public static boolean check(long[] arr, int m, long mid){
        long c=0, days=1;
        for(int i=0;i<arr.length;){
            if(arr[i]>mid)
                return false;
            if(arr[i]+c<=mid){
                c+=arr[i++];
            }
            else{
                c=0;days++;
            }
        }
        return m>=days;
    }
    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        long[] arr=new long[n];
        long sum=0;
        for(int i=0;i<n;i++){
            arr[i]=sc.nextLong();
            sum+=arr[i];
        }
        long l=0, h=sum;
        while(l<h){
            long mid = (l+h)/2;
            if(check(arr, m, mid))
                h=mid;
            else
                l=mid+1;
        }
        System.out.println(l);
        sc.close();
    }
}
