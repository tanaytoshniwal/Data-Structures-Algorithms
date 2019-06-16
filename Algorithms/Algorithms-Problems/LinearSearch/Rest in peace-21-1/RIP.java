import java.util.*;
class TestClass {
    public static boolean has(int a){
        String s = a+"";
        if(s.contains("21"))
            return true;
        else
            return false;
    }
    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        int n =sc.nextInt();
        String[] ans = {"The streak lives still in our heart!", "The streak is broken!"};
        while(n-->0){
            int a = sc.nextInt();
            if(has(a) || a%21 == 0)
                System.out.println(ans[1]);
            else
                System.out.println(ans[0]);
        }
    }
}
