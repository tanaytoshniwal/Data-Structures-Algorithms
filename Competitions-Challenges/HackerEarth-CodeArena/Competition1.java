import java.util.*;
import java.io.*;
class TestClass{
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> list1=new ArrayList<>(), list2=new ArrayList<>();
        for(int i=0;i<n;i++)
            list1.add(sc.nextInt());
        for(int i=0;i<n;i++)
            list2.add(sc.nextInt());
        int c=0;
        //boolean b=false;
        int i=0, j=0;
        while(j!=n){
            c++;
            if(list1.get(i) == list2.get(j)){
                i++;j++;
            }
            else{
                int t=list1.get(i);
                list1.remove(i);
                list1.add(t);
            }
        }
        System.out.println(c);
    }
}
