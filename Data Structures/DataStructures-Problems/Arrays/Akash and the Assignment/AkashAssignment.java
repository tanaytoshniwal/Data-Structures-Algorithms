import java.util.*;
import java.io.*;
class InputReader{
    private BufferedReader br = null;
    private StringTokenizer st = null;
    public InputReader(){
        try{
            br=new BufferedReader(new InputStreamReader(new FileInputStream(FileDescriptor.in),"ASCII"));
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
            bufferedWriter.write('\n');
            bufferedWriter.flush();
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
class TestClass{
    static char[] sort(char[] ch){
        for(int i=0;i<ch.length-1;i++)
            for(int j=i+1;j<ch.length;j++)
                if(ch[i]>ch[j]){
                    char t=ch[i];
                    ch[i]=ch[j];
                    ch[j]=t;
                }
        return ch;
    }
    public static void main(String[] args) throws Exception{
        InputReader sc = new InputReader();
        PrintWriter out=new PrintWriter();
        int n=sc.nextInt(), q=sc.nextInt();
        String str = sc.next();
        while(q-->0){
            int l=sc.nextInt(), r=sc.nextInt(), k=sc.nextInt();
            l--;r--;k--;
            if(k>=r-l+1){
                out.print("Out of range");
                continue;
            }
            else{
                char[] ch = new char[r-l+1];
                int j=0;
                for(int i=l;i<=r;i++){
                    ch[j++] = str.charAt(i);
                }
                ch=sort(ch);
                out.print(ch[k]+"");
            }
        }
    }
}
