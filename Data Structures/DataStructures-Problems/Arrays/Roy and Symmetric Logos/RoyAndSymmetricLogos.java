import java.util.*;
import java.io.*;
class InputReader{
    private BufferedReader bufferedReader = null;
    private StringTokenizer stringTokenizer = null;
    public InputReader(InputStream inputStream){
        bufferedReader = new BufferedReader(new InputStreamReader(inputStream));
    }
    public String next(){
        while(stringTokenizer==null || !stringTokenizer.hasMoreElements()){
            try{
                stringTokenizer = new StringTokenizer(bufferedReader.readLine());
            }
            catch(IOException e){
                e.printStackTrace();
            }
        }
        return stringTokenizer.nextToken();
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
        InputReader sc=new InputReader(System.in);
        PrintWriter pw = new PrintWriter();
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            StringBuffer arr[] = new StringBuffer[n];
            boolean b=true;
            for(int i=0;i<n;i++){
                arr[i] = new StringBuffer(sc.next());
                if(!arr[i].toString().equals(arr[i].reverse().toString())){
                    b=false;
                    //break;
                }
            }
            for(int i=0;i<n;i++){
                StringBuffer temp = new StringBuffer();
                for(int j=0;j<n;j++){
                    temp.append(arr[j].charAt(i));
                }
                //System.out.println("---"+temp);
                if(!temp.toString().equals(temp.reverse().toString())){
                    b=false;
                    break;
                }
            }
            if(b)
                pw.print("YES");
            else
                pw.print("NO");
        }
    }
}
