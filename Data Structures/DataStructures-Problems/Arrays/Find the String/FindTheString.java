import java.util.*;
import java.io.*;
class TestClass{
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt(), m=sc.nextInt();
            int[][] count=new int[n][26];
            for(int i=0;i<n;i++){
                String temp=sc.next();
                for(int j=0;j<m;j++){
                    char ch=temp.charAt(j);
                    count[i][ch-97]++;
                }
            }
            String str = sc.next();
            boolean result = true;
            if(str.length()>(m*n)) result=false;
            else{
                for(int i=0;i<str.length();i++){
                    if(count[i%n][str.charAt(i)-97]>0) count[i%n][str.charAt(i)-97]--;
                    else{
                        result = false;
                        break;
                    }
                }
            }
            if(result)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
    }
}
class MyScanner{
    private BufferedReader br= null;
    private StringTokenizer st= null;
    public MyScanner(InputStream is){
        br = new BufferedReader(new InputStreamReader(is));
    }
    public String next(){
        while(st==null||!st.hasMoreElements()){
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
