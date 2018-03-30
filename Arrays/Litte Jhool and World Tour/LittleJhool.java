import java.util.*;
import java.io.*;
class TestClass{
    public static void main(String[] args) throws Exception{
        MyScanner sc=new MyScanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt(), m=sc.nextInt();
            boolean flag = true;
            Map<Integer, Integer> pos = new HashMap<>();
            for(int i=0;i<m;i++){
                int a=sc.nextInt(), b=sc.nextInt();
                if(flag){
                    int l = (a<=b)?b-a:n+b-a;
                    while(l>=0&&pos.containsKey(a)){
                        int r = pos.get(a);
                        if(r>l){
                            pos.put(a,l);
                            l=r;
                        }
                        a++;
                        l--;
                        if(a==n)
                            a=0;
                    }
                    if(l>=0)
                        pos.put(a,l);
                    else
                        flag=false;
                }
            }
            if(flag)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
class MyScanner{
    private BufferedReader br=null;
    private StringTokenizer st=null;
    public MyScanner(InputStream is){
        br = new BufferedReader(new InputStreamReader(is));
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
    public String nextLine(){
        String str="";
        try{
            str=br.readLine();
        }
        catch(IOException e){
            e.printStackTrace();
        }
        return str;
    }
    public int nextInt(){
        return Integer.parseInt(next());
    }

}
