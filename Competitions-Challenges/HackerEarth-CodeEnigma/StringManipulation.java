import java.util.*;

public class StringManipulation {
	static String compute(String s) {
		String r="";
		r.concat(s.charAt(0)+"");
		for(int i=1;i<s.length()-2;i++) {
			char c=s.charAt(i);
			r.concat(s.charAt(i+1)+"");
			r.concat(c+"");
		}
		r.concat(s.charAt(s.length()-1)+"");
		return r;
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		StringBuffer str=new StringBuffer(sc.nextLine());
		StringTokenizer st = new StringTokenizer(str.toString(), " ");
		while(st.hasMoreTokens()) {
			String t=st.nextToken();
			if(t.length()>=5) {
				t=compute(t);
			}
			System.out.println(t);
		}
	}
}