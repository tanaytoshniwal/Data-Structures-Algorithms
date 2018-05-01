import java.util.*;
class TestClass{
    public static int abs(int a){
        return (a>0)?a:-a;
    }
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        while(n-->0){
            int a=sc.nextInt();
            int b=sc.nextInt();
            int sum = a+b;
            int sub = abs(a-b);
            if(sum%sub == 0)
                System.out.println("Lyanna Mormont Lives");
            else
                System.out.println("Martin, The ruthless Killer");
        }
    }
}
