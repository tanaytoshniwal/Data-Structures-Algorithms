import java.util.Scanner;
import java.io.*;
public class NumberPattern {
    
    
    public static void main(String [] args)throws IOException
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int c=0;
        
        int x=(2*n)-1;
        int z=x+1;
        int t=1,m=1;
        for(int i=1;i<=n;i++)//first loop will run three times
        {
            c=c+t;
            z=z-t;
            for(int j=1;j<=x;j++)
            {
               if((j==c)||(j==z))
               {
                   System.out.print(m);
               }
               else
               {
                   System.out.print("_");
               }
                
            }
            c=0;
            z=x+1;
            m=m+1;
            t=t+1;
            System.out.println();
            
        }
        int d=x-n;
        m=n-1;
        t=n-1;
        c=0;
        z=x+1;
        for(int i=1;i<=d;i++)//second loop will run (x-n)times that is 5-3=2 times
        {
            c=c+t;
            z=z-t;
            
            for(int j=1;j<=x;j++)
            {
               if((j==c)||(j==z))
               {
                   System.out.print(m);
               }
               else
               {
                   System.out.print("_");
               }
            }
            c=0;
            z=x+1;
            t=t-1;
            m=m-1;
            System.out.println();
        }
        
    }
    
}

