import java.io.*;
import java.util.*;
class TestClass{
  public static void main(String[] args) throws Exception{
    MyScanner sc=new MyScanner();
    int n=sc.nextInt();
    long[] arr=new long[n];
    Map<Long,Integer> map = new HashMap<>();
    for(int i=0;i<n;i++){
      arr[i]=sc.nextLong();
      if(map.containsKey(arr[i])){
        int t=map.get(arr[i]);
        map.put(arr[i],++t);
      }
      else
        map.put(arr[i],1);
    }
    long[] r1=new long[n+1], r2=new long[n+1];
    for(int i=0;i<n;i++){
      int k=map.get(arr[i]);
      if(r2[k]==0){
        r2[k]=arr[i];
      }
      while(k>=0&&r1[k]==0){
        r1[k]=arr[i];
        k--;
      }
    }
    int q=sc.nextInt();
    while(q-->0){
      boolean b=(sc.nextInt()==1)?true:false;
      long t=sc.nextLong();
      if(t>n)
        System.out.println(0);
      else if(b)
        System.out.println(r2[(int)t]);
      else
        System.out.println(r1[(int)t]);
    }
  }
}
public static class MyScanner {
  BufferedReader br;
	StringTokenizer st;
	public MyScanner() {
    br = new BufferedReader(new InputStreamReader(System.in));
	}
	String next() {
	  while (st == null || !st.hasMoreElements()) {
	    try {
	      st = new StringTokenizer(br.readLine());
	    } catch (IOException e) {
	      e.printStackTrace();
	    }
	  }
	  return st.nextToken();
	}
	int nextInt() {
	  return Integer.parseInt(next());
	}
  long nextLong() {
    return Long.parseLong(next());
  }
  String nextLine(){
	  String str = "";
		try {
		  str = br.readLine();
		} catch (IOException e) {
		  e.printStackTrace();
		}
		return str;
  }
}
