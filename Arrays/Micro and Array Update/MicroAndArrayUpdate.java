import java.util.*;
import java.io.*;
class TestClass{
    public static void main(String[] args) throws Exception{
        MyScanner sc=new MyScanner();
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int k=sc.nextInt();
            int arr[]=new int[n];
            int min=99999999;
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
                if(arr[i]<min)
                    min=arr[i];
            }
            int c=(k-min>=0)?k-min:0;
            System.out.println(c);
        }
    }
}
class MyScanner{
    private BufferedReader br=null;
    private StringTokenizer st=null;
    public MyScanner(){
        br=new BufferedReader(new InputStreamReader(System.in));
    }
    public String next(){
        while(st==null||!st.hasMoreElements()){
            try{
                st=new StringTokenizer(br.readLine());
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
