class Solution {
    public static void main(String[] args) {
		int total = 0;
		int a = 1;
		int b = 2;
		
		while (a <= 4000000) {
			int t = a + b;
			if (a % 2 == 0) total += a;
			a = b;
			b = t;
		}

		System.out.println(total);
    }
}