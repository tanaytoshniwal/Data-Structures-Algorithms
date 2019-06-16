import java.util.Scanner;

public class SubSequence {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		StringBuffer str=new StringBuffer(sc.next());
		int n = Integer.parseInt(str.charAt(0)+"");
		int r=0,c=0;
		for(int i=0;i<str.length()-1;i++) {
			r=r*10+Integer.parseInt(str.charAt(i+1)+"");
			c++;
		}
		if(c%n==0) {
			for(int i=0;i<c;i+=n)
				System.out.print(str.charAt(i+1));
		}
		else
			System.out.println("Bogey Input");
	}
}
