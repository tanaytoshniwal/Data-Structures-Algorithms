class Permute{
	static String swap(String str, int x, int y){
		char ch[] = str.toCharArray();
		char c = ch[y];
		ch[y] = ch[x];
		ch[x] = c;
		return new String(ch);
	}
	static void permute(String str, int x, int y){
		if(x==y)
			System.out.println(str);
		else{
			for(int i=x;i<=y;i++){
				str = swap(str, x, i);
				permute(str, x+1, y);
				str = swap(str, x, i);
			}
		}
	}
	public static void main(String[] args){
		String str = new String("ABC");
		permute(str, 0, str.length()-1);
	}
}
