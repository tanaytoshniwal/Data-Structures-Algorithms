import java.util.*;
import java.io.*;
class Facito{
    public static void main(String[] args){
        MyScanner sc=new MyScanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[] arr = new int[n];
            boolean b=true;
            Stack<Integer> stack = new Stack<>();
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
                if(n%2==1 && i==n/2){
                    //System.out.println(arr[i] + "::::::" + i);
                    continue;
                }
                if(i<n/2)
                    stack.push(arr[i]);
                else{
                    int temp = stack.pop();
                    //System.out.println(temp+":::"+arr[i]);
                    if(temp==arr[i]){
                        continue;
                    }
                    else{
                        b=false;
                        break;
                    }
                }
            }
            //System.out.println(stack);
            if(stack.empty() && b)
                System.out.println("YES");
            else
                System.out.println("NO");
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
