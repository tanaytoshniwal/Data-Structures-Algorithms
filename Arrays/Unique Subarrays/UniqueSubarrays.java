import java.util.*;
import java.io.*;
class TestClass {
    public static void main(String[] args) throws Exception {
        MyScanner sc = new MyScanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++)
                arr[i]=sc.nextInt();
            long res=0;
            HashSet<Integer> set = new HashSet<>();
            for(int i=0, j=0;i<n;i++){
                for(;j<n;j++){
                    if(set.contains(arr[j]))
                        break;
                    else
                        set.add(arr[j]);
                }
                //System.out.println((j-i)+":::"+(j-i+1)+":::"+((j-i)*(j-i+1))+":::"+(((j-i)*(j-i+1))/2));
                res += (((long)j-i)*(j-i+1l))/2;
                set.remove(arr[i]);
            }
            System.out.println(res);
        }
    }
}
class MyScanner{
    private BufferedReader br = null;
    private StringTokenizer st = null;
    public MyScanner(InputStream is){
        br = new BufferedReader(new InputStreamReader(is));
    }
    public String next(){
        while(st == null || !st.hasMoreElements()){
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
