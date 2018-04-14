import java.util.*;
import java.io.*;
class MyScanner{
    private BufferedReader br = null;
    private StringTokenizer st = null;
    public MyScanner(){
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
    static char check(int[][] arr, int i, int j, int m, int n){
        if(j!=m-1)
          if(arr[i][j+1]==0)
            return 'r';
        if(j!=0)
          if(arr[i][j-1]==0)
            return 'l';
        if(i!=n-1)
          if(arr[i+1][j]==0)
            return 'f';
        if(i!=0)
          if(arr[i-1][j]==0)
            return 'b';
        return 'o';
    }
    public static void main(String[] args) throws Exception{
        MyScanner sc=new MyScanner();
        PrintWriter out = new PrintWriter();
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt(), m=sc.nextInt();
            int[][] arr = new int[n][m];
            int si=sc.nextInt(), sj=sc.nextInt();
            si--;sj--;
            int di=sc.nextInt(), dj=sc.nextInt();
            di--;dj--;
            boolean b=true;
            int i=si,j=sj;
            for(i=si;;){
                for(j=sj;;){
                    arr[i][j]=1;
                    switch(check(arr,i,j,m,n)){
                        case 'r':{
                            arr[i][j+1]=1;
                            j++;
                            break;
                        }
                        case 'l':{
                            arr[i][j-1]=1;
                            j--;
                            break;
                        }
                        case 'f':{
                            arr[i+1][j]=1;
                            i++;
                            break;
                        }
                        case 'b':{
                            arr[i-1][j]=1;
                            i--;
                            break;
                        }
                        case 'o':{
                            arr[i][j]=-1;
                            break;
                        }
                    }
                    if(i==di && j==dj){
                      b=false;
                      break;
                    }
                }
                if(!b)
                  break;
            }
            switch(check(arr,di,dj,m,n)){
              case 'r':{
                  out.print("Right");
                  break;
              }
              case 'l':{
                  out.print("Left");
                  break;
              }
              case 'f':{
                  out.print("Back");
                  break;
              }
              case 'b':{
                  out.print("Front");
                  break;
              }
              case 'o':{
                  out.print("Over");
                  break;
              }
            }
        }
    }
}
