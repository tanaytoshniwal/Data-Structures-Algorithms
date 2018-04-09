import java.util.*;
import java.io.*;
class Facito{
    public static void main(String[] args){
        MyScanner sc=new MyScanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();
            int count=0;
            if(n>=a)
                count++;
            //System.out.println(a+":::"+count);
            if(n>=b)
                count++;
            //System.out.println(b+":::"+count);
            if(n>=c)
                count++;
            //System.out.println(c+":::"+count);
            if(c==0)
                System.out.println("NO");
            else
                System.out.println(count);
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
