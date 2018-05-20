import java.util.*;
class PrintElementsInSpiral {
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
                arr[i][j]=sc.nextInt();

        /*printing*/
        int i=0,j=0,c=0;
        int tu=0, tl=0, tr=m-1, tb=n-1;
        while(c<n*m){//c++<n*m){
            for(j=tl;j<=tr;j++)
                System.out.print(arr[i][j]+" ");
            c+=tr-tl;
            j--;
            tu++;
            for(i=tu;i<=tb;i++)
                System.out.print(arr[i][j]+" ");
            c+=tb-tu;
            i--;
            tr--;
            for(j=tr;j>=tl;j--)
                System.out.print(arr[i][j]+" ");
            c+=tl-tr;
            j++;
            tb--;
            for(i=tb;i>=tu;i--)
                System.out.print(arr[i][j]+" ");
            c+=tu-tb;
            i++;
            tl++;
        }
    }
}
