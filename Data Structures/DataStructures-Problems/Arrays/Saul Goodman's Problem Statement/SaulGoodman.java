import java.util.*;
import java.io.*;
class InputScanner{
    private BufferedReader bufferedReader = null;
    private StringTokenizer stringTokenizer = null;
    public InputScanner(){
        try{
            bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(FileDescriptor.in), "ASCII"));
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
    public String next(){
        while(stringTokenizer == null || !stringTokenizer.hasMoreElements()){
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
class OutputWriter{
    private BufferedWriter bufferedWriter = null;
    public OutputWriter(){
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
        InputScanner sc = new InputScanner();
        OutputWriter out = new OutputWriter();
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            ArrayList<Integer> list1=new ArrayList<>(), list2=new ArrayList<>();
            for(int i=0;i<n;i++){
                int x=sc.nextInt(), y=sc.nextInt();
                list1.add(x-y);
                list2.add(x+y);
            }
            HashMap<Integer, Integer> map1=new HashMap<>(), map2=new HashMap<>();
            for(int a:list1){
                if(map1.containsKey(a)){
                    map1.put(a, map1.get(a)+1);
                }
                else{
                    map1.put(a,1);
                }
            }
            for(int a:list2){
                if(map2.containsKey(a)){
                    map2.put(a, map2.get(a)+1);
                }
                else{
                    map2.put(a,1);
                }
            }
            int count=0;
            for(int a:map1.keySet()){
                if(map1.get(a)>1)
                    count+=map1.get(a)*(map1.get(a)-1)/2;
            }
            for(int a:map2.keySet()){
                if(map2.get(a)>1)
                    count+=map2.get(a)*(map2.get(a)-1)/2;
            }
            out.print(count+"");
        }
    }
}
