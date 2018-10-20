import java.util.*;
public class StuckInMaze {

	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n1,n2;
		n1=sc.nextInt();
		int arr[]=new int[n1];
		for(int i=0;i<n1;i++)
		{
			arr[i]=sc.nextInt();
		}
		n2=sc.nextInt();
		int arr1[]=new int[n2];
		for(int i=0;i<n2;i++)
		{
			arr1[i]=sc.nextInt();
		}
		for(int i=0;i<n1;i++)
		{
			int flag=0;
			for(int j=0;j<n2;j++)
			{
				if(arr[i]==arr1[j])
				{
					flag=1;break;
				}
				else
					flag=0;
			}
			if(flag==0)
				System.out.print(arr[i]+" ");
		}
	}
}
