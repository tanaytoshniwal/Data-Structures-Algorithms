import java.util.*;
public class Anushka {

	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			String str=sc.next();
			int count=0;
			for(int j=0;j<str.length();j++)
			{
				if(str.charAt(j)=='_')
					count++;
			}
			if(count>=2)
				System.out.println("true");
			else
				System.out.println("false");
		}
	}
}

