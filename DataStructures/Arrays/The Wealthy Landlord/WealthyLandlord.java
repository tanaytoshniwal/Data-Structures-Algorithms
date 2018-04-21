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
class TestClass{
    public static void main(String[] args) throws Exception {
        InputScanner sc=new InputScanner();
        int arr[][]  = new int[1000][1000];
        long result[][] = new long[1000][1000];
        int n = sc.nextInt();
        int xmax=-99999,ymax=-99999,xmin=99999,ymin=99999;
        while(n-->0) {
            int x1=sc.nextInt();
            int y1=sc.nextInt();
            int x2=sc.nextInt();
            int y2=sc.nextInt();
            int c = sc.nextInt();
            if (x1<xmin) xmin = x1;
            if (x2>xmax) xmax = x2;
            if (y1<ymin) ymin = y1;
            if (y2>ymax) ymax = y2;
            for (int i=x1-1;i<x2;i++) {
                for (int j=y1-1;j<y2;j++) {
                    arr[i][j]++;
                    result[i][j] += c;
                }
            }
        }
        long res=0;
        for(int i=xmin-1;i<xmax;i++){
            for(int j=ymin-1;j<ymax;j++){
                if(arr[i][j]>1) res+=result[i][j];
            }
        }
        System.out.println(res+"");
    }
}
