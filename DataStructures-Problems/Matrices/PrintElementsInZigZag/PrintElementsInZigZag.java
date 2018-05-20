import java.util.*;
class PrintElementsInZigZag {
    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        System.out.print("Input n:");
        int n=sc.nextInt();
        System.out.print("Input m:");
        int m=sc.nextInt();
        int[][] arr = new int[n][m];
        System.out.println("Input "+(n*m)+" elements:");
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                arr[i][j] = sc.nextInt();
        /*printing*/
        for(int i=0;i<n;i++){
            if(i%2==0)
                for(int j=0;j<m;j++)
                    System.out.print(arr[i][j]+" ");
            else
                for(int j=m-1;j>=0;j--)
                    System.out.print(arr[i][j]+" ");
            System.out.println();
        }
    }
}
