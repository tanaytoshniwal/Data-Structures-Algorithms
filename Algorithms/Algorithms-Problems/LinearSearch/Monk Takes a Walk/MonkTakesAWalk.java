import java.util.*;
class TestClass {
    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        while(n-->0) {
            String str = sc.next();
            int c=0;
            str = str.toLowerCase();
            for(int i=0;i<str.length();i++){
                char ch = str.charAt(i);
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                    c++;
            }
            System.out.println(c);
        }
    }
}
