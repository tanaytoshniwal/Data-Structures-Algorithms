import java.util.*;
class TestClass {
    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int q=sc.nextInt();
        while(q-->0){
            int a=sc.nextInt();
            int sum=0;
            int index=0;
            while(sum<a){
                if(index == arr.length){
                    index = -1;
                    break;
                }
                sum+=arr[index];
                index++;
            }
            System.out.println(index);
        }
    }
}
