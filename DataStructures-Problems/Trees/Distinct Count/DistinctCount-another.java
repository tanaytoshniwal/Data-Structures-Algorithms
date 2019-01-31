import java.util.*;
class TestClass{
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            HashSet<Integer> map = new HashSet<>();
            for(int i=0;i<n;i++)
                map.add(sc.nextInt());
            if(map.size()>k)
                System.out.println("Average");
            else if(map.size()<k)
                System.out.println("Bad");
            else
                System.out.println("Good");
        }
    }
}
