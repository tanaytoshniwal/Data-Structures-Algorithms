import java.util.*;
import java.io.*;
class TestClass{
    public static void main(String[] args) throws Exception{
        MyScanner sc = new MyScanner(System.in);
        int arr[][] = new int[3][3];
        int sum1=0, sum2=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr[i][j] = sc.nextInt();
                if((i+j)%2==0)
                    sum1 += arr[i][j];
                else
                    sum2 += arr[i][j];
            }
        }
        System.out.println(sum1+"\n"+sum2);
    }
}
class MyScanner{
    private BufferedReader br = null;
    private StringTokenizer st = null;
    public MyScanner(InputStream is){
        br = new BufferedReader(new InputStreamReader(is));
    }
    public String next(){
        while(st==null || !st.hasMoreElements()){
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
