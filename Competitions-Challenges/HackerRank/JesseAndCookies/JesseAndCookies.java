import java.util.*;
import java.io.*;

class InputReader{
    private BufferedReader bufferedReader = null;
    private StringTokenizer stringTokenizer = null;
    public InputReader(){
        try{
            bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(FileDescriptor.in), "ASCII"));
        }
        catch(IOException e){
            e.printStackTrace();
        }
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
class Solution {
    public static boolean check(ArrayList t, int k){
        Iterator<Integer> itr = t.iterator();
        while(itr.hasNext()){
            int a = itr.next();
            if(a<k)
                return false;
        }
        return true;
    }
    public static void main(String[] args) throws Exception{
        InputReader sc=new InputReader();
        PrintWriter out=new PrintWriter();
        int n=sc.nextInt();
        ArrayList<Integer> list = new ArrayList<>();
        int k=sc.nextInt();
        for(int i=0;i<n;i++)
            list.add(sc.nextInt());
        int c=0;
        Collections.sort(list);
        try{
            while(!check(list, k)){
                int a=list.get(0);
                list.remove(0);
                int b=list.get(1);
                list.remove(1);
                list.add((1*a) + (2*b));
                Collections.sort(list);
                c++;
            }
        }
        catch(Exception e){
            c=-1;
        }
        out.print(c+"");
    }
}
