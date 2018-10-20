import java.util.Scanner;

public class Chug {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		while(n-->0) {
			String name=sc.next();
			int c=0;
			String[] str=new String[5];
			for(int i=0;i<5;i++) {
				str[i]=sc.next();
				if(str[i].trim().equalsIgnoreCase("water"))
					c+=0;
				if(str[i].trim().equalsIgnoreCase("beer"))
					c+=3;
				if(str[i].trim().equalsIgnoreCase("whiskey"))
					c+=5;
				if(str[i].trim().equalsIgnoreCase("vodka"))
					c+=10;
				if(c<3)
					System.out.println(name+" - "+"Kid");
				else if(c<6)
					System.out.println(name+" - "+"Rookie");
				else if(c<9)
					System.out.println(name+" - "+"Legend");
				else
					System.out.println(name+" - "+"Ultralegend");
			}
		}
	}
}
