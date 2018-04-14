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
    public static void main(String[] args) throws Exception{
        MyScanner sc=new MyScanner();
        PrintWriter out = new PrintWriter();
        int t = sc.nextInt();
		for(int i=0;i<t;i++){
			int m = sc.nextInt();
			int n = sc.nextInt();
			int sx = sc.nextInt();
			int sy = sc.nextInt();
			sx--;
			sy--;
			int dx = sc.nextInt();
			int dy = sc.nextInt();
			dx--;
			dy--;
			String  ans = "";
			if(sx==0 && sy==0){
				if(dx%2 == 0)
					ans = "Right";
				else
					ans = "Left";
				if( (dx%2==0 && dy==n-1) || (dx%2!=0 && dy==0) )
					ans="Back";
				if( (dx%2!=0 && dx==m-1 && dy==0) || (dx%2==0 && dx==m-1 && dy==n-1) )
					ans="Over";
			}
			else if(sx==0 && sy==n-1){
				if(dx%2 == 0)
					ans = "Left";
				else
					ans = "Right";
				if( (dx%2!=0 && dy==n-1) || (dx%2==0 && dy==0) )
					ans="Back";
				if( (dx%2==0 && dx==m-1 && dy==0) || (dx%2!=0 && dx==m-1 && dy==n-1) )
					ans="Over";
			}
			else if(sx==m-1 && sy==0){
				if((m-1-dx)%2 == 0)
					ans = "Right";
				else
					ans = "Left";
				if( ((m-1-dx)%2==0 && dy==n-1) || ((m-1-dx)%2!=0 && dy==0) )
					ans="Front";
				if( ((m-1-dx)%2!=0 && dx==0 && dy==0) || ((m-1-dx)%2==0 && dx==0 && dy==n-1) )
					ans="Over";
			}
			else if(sx==m-1 && sy==n-1){
				if((m-1-dx)%2 == 0)
					ans = "Left";
				else
					ans = "Right";
				if( ((m-1-dx)%2!=0 && dy==n-1) || ((m-1-dx)%2==0 && dy==0) )
					ans="Front";
				if( ((m-1-dx)%2==0 && dx==0 && dy==0) || ((m-1-dx)%2!=0 && dx==0 && dy==n-1) )
					ans="Over";
			}
			out.print(ans);
		}
    }
}
