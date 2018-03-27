import java.util.*;
class TestClass{
  public static int[] swap(int[] arr, int x){
    int t=arr[x];
    arr[x]=arr[arr.length-x-1];
    arr[arr.length-x-1]=t;
    return arr;
  }
  public static void main(String[] args) throws Exeption{
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int[] arr=new int[n];
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    int q=sc.nextInt();
    while(q-->0){
      int x=sc.nextInt();
      int y=sc.nextInt();
      x--;y--;
      for(int j=x;j<=y;j++)
        arr = swap(arr,j);
    }
    for(int i=0;i<n;i++)
      System.out.print(arr[i]+" ");
  }
}
