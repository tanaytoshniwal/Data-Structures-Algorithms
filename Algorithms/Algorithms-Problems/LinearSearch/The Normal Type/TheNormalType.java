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
        bw = new BufferedWriter(new OutputStreamWriter(System.out));
    }
    public void print(Object obj) throws IOException{
        bw.append(obj.toString());
    }
    public void println(Object obj) throws IOException{
        print(obj+"\n");
    }
    public void flush() throws IOException{
        bw.flush();
    }
}
class TestClass {
    public static void main(String[] args) throws Exception {
        InputReader sc = new InputReader();
        OutputWriter out = new OutputWriter();
        int n=sc.nextInt();
        int[] arr=new int[n];
        long ans = 0;
        HashSet<Integer> set = new HashSet<>();
        ArrayList<Integer> list = new ArrayList<>();
        for(int i=0;i<n;i++){
            int t=sc.nextInt();
            set.add(t);
            list.add(t);
        }
        int c = set.size();
        for(int i=0;i<n;i++){
            int j=i;
            HashSet<Integer> tset = new HashSet<>();
            for(;j<n;j++){
                tset.add(list.get(j));
                if(tset.size() == c)
                    break;
            }
            ans += n-j;
        }
        out.println(ans+"");
        out.flush();
    }
}
