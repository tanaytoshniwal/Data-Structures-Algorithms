import java.util.Scanner;

public class TTT {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[][] arr=new int[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				arr[i][j]=sc.nextInt();
		int res=0;boolean d1=true,d2=true;
		for(int i=0;i<n;i++) {
			boolean b=true,b1=true;
			for(int j=0;j<n;j++) {
				if(arr[i][j]!=1) {
					b=false;
					break;
				}
			}
			if(b)
				res++;
			for(int j=0;j<n;j++) {
				if(arr[j][i]!=1) {
					b1=false;
					break;
				}
			}
			if(b1)
				res++;
			if(arr[i][i]!=1)
				d1=false;
			if(arr[i][n-i-1]!=1)
				d2=false;
		}
		if(d1)
			res++;
		if(d2)
			res++;
		System.out.println(res);
		
	}
}
