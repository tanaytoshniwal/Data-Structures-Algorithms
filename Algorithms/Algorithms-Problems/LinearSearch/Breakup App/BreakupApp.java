import java.util.*;
class TestClass {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        String[] ans = {"Date", "No Date"};
        int c1=0, c2=0;
        while(n-->0){
            String str[] = sc.nextLine().split(" ");
            switch(str[0]){
                case "G:":{
                    for(int i=1;i<str.length;i++)
                        if(str[i].equals("19") || str[i].equals("20"))
                            c1 += 2;
                        else{
                            try{
                                int j = Integer.parseInt(str[i]);
                                c2+=2;
                            }
                            catch(Exception e){}
                        }
                    break;
                }
                case "M:":{
                    for(int i=1;i<str.length;i++)
                        if(str[i].equals("19") || str[i].equals("20"))
                            c1 += 1;
                        else{
                            try{
                                int j = Integer.parseInt(str[i]);
                                c2+=1;
                            }
                            catch(Exception e){}
                        }
                    break;
                }
            }
        }
        //System.out.println(c1+":::"+c2);
        if(c1>c2)
            System.out.println(ans[0]);
        else
            System.out.println(ans[1]);
    }
}
