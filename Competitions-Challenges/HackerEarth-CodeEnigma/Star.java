import java.util.Scanner;

public class Star {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n=6;
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				System.out.print("-");
			}
			for(int j=0;j<=2*i;j++) {
				System.out.print("*");
			}
			for(int j=i+1;j<n;j++) {
				System.out.print("-");
			}
			System.out.println();
		}
		for(int i=0;i<n-1;i++) {
			for(int j=0;j<=i;j++)
				System.out.print("-");
			for(int j=i;j<2*n-i-3;j++)
				System.out.print("*");
			for(int j=0;j<=i;j++)
				System.out.print("-");
			System.out.println();
		}
	}
}
