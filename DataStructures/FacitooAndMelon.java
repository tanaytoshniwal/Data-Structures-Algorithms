import java.util.*;
import java.io.*;
class Facito{
    public static void main(String[] args){
        MyScanner sc=new MyScanner(System.in);
        int n = sc.nextInt();
        if(n>100 || n<0)
            System.out.println("WRONG");
        else{
            if(n%2==0){
                int a = n/2;
                int b = n-a;
                System.out.println("YES");
            }
            else {
                int a = n/2;
                a--;
                int b = n-a;
                System.out.println("YES");
            }
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
