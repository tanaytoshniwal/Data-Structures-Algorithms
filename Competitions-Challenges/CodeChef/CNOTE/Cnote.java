import java.util.*;
class Cnote{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    while(--t>=0){
      int x=sc.nextInt(),y=sc.nextInt(),k=sc.nextInt(),n=sc.nextInt();
      boolean b=false;
      for(int i=0;i<n;i++){
        int p=sc.nextInt(),c=sc.nextInt();
        if(k>=c && (x-y)<=p){
          b = true;
        }
      }
      if(!b){
        System.out.println("UnluckyChef");
      }
      else{
        System.out.println("LuckyChef");
      }
    }
    sc.close();
  }
}
