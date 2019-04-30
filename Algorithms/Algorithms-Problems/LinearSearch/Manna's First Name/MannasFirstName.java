import java.util.*;
class TestClass{
    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        while(n-->0){
            int a=0, b=0;
            char[] str1 = {'S','U','V','O'};
            char[] str2 = {'S','U','V','O','J','I','T'};
            String str = sc.next();
            char[] arr = str.toCharArray();
            int j=0;
            for(int i=0;i<arr.length;i++){
                if(arr[i]==str2[j]){
                    j++;
                    if(j==7){
                        b++;
                        j=0;
                    }
                }
            }
            j=0;
            for(int i=0;i<arr.length;i++){
                if(arr[i]==str1[j]){
                    j++;
                    if(j==4){
                        a++;
                        j=0;
                    }
                }
            }
            System.out.println("SUVO = "+(a-b)+", SUVOJIT = "+b);
        }
    }
}
