import java.util.*;
class Compiler{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    while(--t>=0){
		    String str = sc.next();
		    int count = 0;
		    int p = 0;
		    for(int i = 0; i<str.length(); i++) {
		        if(str.charAt(i) == '<')
    		        p++;
		        else
    		        p--;
		        if(p==0)
    		        count = i+1;
		        if(p<0)
    		        break;
		    }
		    System.out.println(count);
    }
    sc.close();
  }
}
