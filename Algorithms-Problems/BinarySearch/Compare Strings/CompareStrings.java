import java.util.*;
import java.io.*;
class InputReader{
    private BufferedReader br = null;
    private StringTokenizer st = null;
    public InputReader(){
        br = new BufferedReader(new InputStreamReader(System.in));
    }
    public String next(){
        while(st==null||!st.hasMoreElements()){
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
class OutputWriter {
    private BufferedWriter bw=null;
    public OutputWriter(){
        bw = new BufferedWriter(new OutputStreamWriter(System.out), 512);
    }
    public void print(Object o){
        try{
            bw.write(o+"");
            bw.write('\n');
            bw.flush();
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
class TestClass {
    public static void main(String[] agrs) throws Exception {
        InputReader sc=new InputReader();
        OutputWriter out = new OutputWriter();
        int n=sc.nextInt();
        int m=sc.nextInt();
        char[] str1 = sc.next().toCharArray();
        char[] str2 = sc.next().toCharArray();
        int a=n;
        for(int i=0;i<n;i++)
            if(str1[i]==0)
                a=i;
        StringBuilder result = new StringBuilder();
        //System.out.println(a);
        while(m-->0){
            int q=sc.nextInt()-1;
            if(q>=a-1)
                result.append("YES\n");
            else
                result.append("NO\n");
        }
        out.print(result);
    }
}
