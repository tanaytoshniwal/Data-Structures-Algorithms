import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		for (int i = 0; i < n; i++)
			arr[i] = sc.nextInt();
		int k=sc.nextInt();
		Arrays.sort(arr);
		while(k-->0){
			int x = sc.nextInt();
			int sum = 0;
			int count = 0;
			for(int i=0;i<arr.length;i++) {
				if (arr[i]<=x) {
					sum+=arr[i];
					count++;
				}
                else
					break;
			}
			System.out.println(count+" "+sum);
		}
	}
}
