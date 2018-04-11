import java.util.*;
import java.io.*;
class TestClass{
    public static void main(String[] args) throws Exception{
        MyScanner sc=new MyScanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int arr[][] = new int[n][n];
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    arr[i][j] = sc.nextInt();
            boolean b=true;
            for(int i=0;i<n/2;i++){
                for(int j=0;j<n/2;j++){
                    if(arr[i][j] != arr[i][n-1-j]){
                        b=false;
                        break;
                    }
                    if(arr[i][j] != arr[n-i-1][j]){
                        b=false;
                        break;
                    }
                }
            }
            if(b)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
class MyScanner{
    private BufferedReader br = null;
    private StringTokenizer st = null;
    public MyScanner(InputStream is){
        br = new BufferedReader(new InputStreamReader(is));
    }
    public String next(){
        while(st == null || !st.hasMoreElements()){
            try{
                st = new StringTokenizer(br.readLine());
            }
            catch(IOException e){
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }
    public int nextInt(){
        return Integer.parseInt(next());
    }
}
