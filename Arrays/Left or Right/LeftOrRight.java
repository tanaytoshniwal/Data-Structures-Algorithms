import java.util.*;
import java.io.*;
class MyScanner{
    private BufferedReader br = null;
    private StringTokenizer st = null;
    public MyScanner(InputStream is){
        br = new BufferedReader(new InputStreamReader(is));
    }
    public String next(){
        while(st==null || !st.hasMoreElements()){
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
class TestClass{
    public static void main(String[] args) throws Exception{
        MyScanner sc=new MyScanner(System.in);
        int n=sc.nextInt(),m=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        while(m-->0){
            int a,b;
            char c;
            a=sc.nextInt();
            b=sc.nextInt();
            c=sc.next().charAt(0);
            int r=0;
            //System.out.println(a+":::"+b+":::"+c);
            if(c=='L'){
                for(int i=a;arr[i]!=b;i--,r++){
                    if(i==0)
                        i=arr.length;
                    if(r>arr.length-1){
                        r=-1;
                        break;
                    }
                }
            }
            else{
                for(int i=a;arr[i]!=b;i++,r++){
                    if(i==arr.length-1)
                        i=-1;
                    if(r>arr.length-1){
                        r=-1;
                        break;
                    }
                }
            }
            System.out.println(r);
        }
    }
}
