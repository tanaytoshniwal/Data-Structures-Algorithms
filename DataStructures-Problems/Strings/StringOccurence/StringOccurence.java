import java.util.*;
import java.io.*;
class MyScanner{
  private BufferedReader br=null;
  private StringTokenizer st=null;
  public MyScanner(InputStream is){
    br=new BufferedReader(new InputStreamReader(is));
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
  public String nextLine(){
    String str="";
    try{
      str=br.readLine();
    }
    catch(IOException e){
      e.printStackTrace();
    }
    return str;
  }
  public int nextInt(){
    return Integer.parseInt(next());
  }
}
class TestClass {
  public static void main(String[] args){
    MyScanner sc=new MyScanner(System.in);
    String s1=sc.next();
    String str=sc.next();
    Map<Integer,Integer> map = new HashMap<>();
    for(int i=0;i<str.length()-s1.length();i++){
      String temp = ((int)(Math.pow(10,i)))+str.substring(i);
      int t=temp.indexOf(s1);
      if(t!=-1){
        map.put(t-1, 1);
      }
    }
    int c=0;
    for(int i:map.keySet()){
      c++;
    }
    System.out.println(c);
  }
}
