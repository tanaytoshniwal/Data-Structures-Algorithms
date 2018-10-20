import java.util.*;
public class Sumitup {

	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
			int n=sc.nextInt();
			int arr[]=new int[n];
			for(int j=0;j<n;j++)
			{
				arr[j]=sc.nextInt();
			}
			int sum=sc.nextInt();
			int flag=0;
			for(int j=0;j<n;j++)
			{
				for(int k=j+1;k<n;k++)
				{
					if(arr[j]+arr[k]==sum)
					{
						flag=1;
					}
				}
			}
			if(flag==1)
			{
				System.out.println("Yes");
			}
			else
				System.out.println("No");
		}
	}
}

