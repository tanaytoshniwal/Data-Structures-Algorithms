import java.util.*;
import java.io.*;
class InputReader {
    private BufferedReader br = null;
    private StringTokenizer st = null;
    public InputReader(){
        try{
            br=new BufferedReader(new InputStreamReader(new FileInputStream(FileDescriptor.in), "ASCII"));
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
    public String next(){
        while(st == null || !st.hasMoreElements()){
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
    public long nextLong(){
        return Long.parseLong(next());
    }
}
class OutputWriter {
    private BufferedWriter bw = null;
    public OutputWriter(){
        try{
            bw = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(FileDescriptor.out),"ASCII"), 512);
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
    public void print(String str){
        try{
            bw.write(str);
            bw.write('\n');
            bw.flush();
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
class TestClass {
    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        OutputWriter out = new OutputWriter();
        int n=sc.nextInt();
        long[] arr=new long[n];
        long sum = 0;
        for(int i=0;i<n;i++){
            arr[i]=sc.nextLong();
            sum+=arr[i];
        }
        long max=Long.MIN_VALUE;
        long min=Long.MAX_VALUE;
        for(int i=0;i<n;i++){
            long temp = sum-arr[i];
            if(temp>max)
                max=temp;
            if(temp<min)
                min=temp;
        }
        out.print(min+" "+max);
    }
}
