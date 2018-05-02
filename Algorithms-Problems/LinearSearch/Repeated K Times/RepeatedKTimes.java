import java.util.*;
class TestClass {
    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr=new int[n];
        TreeMap<Integer, Integer> map = new TreeMap<>();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
            if(map.containsKey(arr[i])){
                int t=map.get(arr[i]);
                map.put(arr[i], ++t);
            }
            else
                map.put(arr[i], 1);
        }
        int k=sc.nextInt();
        for(int i:map.keySet()){
            if(map.get(i) == k){
                System.out.println(i);
                break;
            }
        }
    }
}
