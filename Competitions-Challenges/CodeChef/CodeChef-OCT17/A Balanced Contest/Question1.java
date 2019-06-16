import java.util.Scanner;
class Test{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
			int n=sc.nextInt(),p=sc.nextInt();
			int cakewalk=0;
			int hard=0;
			for(int i=0;i<n;i++){
				int pn=sc.nextInt();
				if(pn <= (int)(p/10))
					hard++;
				else if(pn >= (int)(p/2))
					cakewalk++;
			}
			if(cakewalk==1 && hard==2)
				System.out.println("yes");
			else{
				System.out.println("no");
				//System.out.println(":::"+cakewalk+":::"+hard+":::");
			}
			t--;
		}
	}
}