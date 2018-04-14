import java.util.*;
import java.io.*;
class InputReader{
    private BufferedReader br = null;
    private StringTokenizer st = null;
    public InputReader(){
        try{
            br = new BufferedReader(new InputStreamReader(new FileInputStream(FileDescriptor.in), "ASCII"));
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
    public String next(){
        while(st==null || !st.hasMoreElements()){
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
class PrintWriter{
    private BufferedWriter bufferedWriter = null;
    public PrintWriter(){
        try{
            bufferedWriter = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(FileDescriptor.out), "ASCII"), 512);
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
    public void print(String string){
        try{
            bufferedWriter.write(string);
            bufferedWriter.flush();
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
    public void println(){
        try{
            bufferedWriter.write('\n');
            bufferedWriter.flush();
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
class TestClass{
    public static void main(String[] args) throws Exception{
        InputReader sc=new InputReader();
        //PrintWriter out = new PrintWriter();
        int n=sc.nextInt(), m=sc.nextInt(), k=sc.nextInt();
        int[][] arr=new int[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                arr[i][j] = sc.nextInt();
        while(k-->0){
            int r=sc.nextInt(), c=sc.nextInt(), s=sc.nextInt(), d=sc.nextInt();
            boolean b=true;
            int rc=0;
            for(int i=r-1;rc++<s;i++){
                int cc=0;
                for(int j=c-1;cc++<s;j++){
                    arr[i][j]+=d;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                System.out.print(arr[i][j]+" ");
            System.out.println();
        }
    }
}
