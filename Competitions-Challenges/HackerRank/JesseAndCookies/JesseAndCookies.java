import java.io.*;
import java.util.*;

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
}
class Solution {
    static boolean check(int k, int[] A) throws Exception{
        for(int i=0;i<A.length;i++)
            if(A[i]<k && A[i]!=-1)
                return false;
        return true;
    }
    static int c=0;
    static int[] query(int[] A) throws Exception{
        Arrays.sort(A);
        int a=A[c+0];
        int b=A[c+1];
        A[c+0]=-1;
        A[c+1] = a+b+b;
        return A;
    }
    static int cookies(int k, int[] A) {
        try{
            while(!check(k, A)){
                A=query(A);
                c++;
            }
        }
        catch(Exception e){
            c=-1;
        }
        return c;
    }

    public static void main(String[] args) throws IOException {
        InputReader sc = new InputReader();
        PrintWriter out = new PrintWriter();
        int n=sc.nextInt();
        int k = sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        out.print(cookies(k, arr)+"");
    }
}
