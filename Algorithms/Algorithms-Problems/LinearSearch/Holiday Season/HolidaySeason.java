import java.util.*;
class TestClass {
    public static void main(String[] args) throws Exception {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        char[] ch=sc.next().toCharArray();
        if(n<4){
            System.out.println(0);
            System.exit(0);
        }
        long result = 0;
		int[] cnt = new int[26];
		for (int i=0;i<n-1;i++) {
			int temp = 0;
			for (int j=i+1;j<n;j++) {
				if (ch[i] == ch[j]) {
					result += temp;
				}
				temp += cnt[ch[j] - 'a'];
				//System.out.print(cnt[ch[j]-'a']+":"+(ch[j]-'a')+" ");
			}
			//System.out.println();
			cnt[ch[i] - 'a']++;
		}
		System.out.println(result);
    }
}
