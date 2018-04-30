import java.io.*;
import java.util.*;
public class TestClass {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter wr = new PrintWriter(System.out);
        int T = Integer.parseInt(br.readLine().trim());
        for(int t_i=0; t_i<T; t_i++){
            try{
                String[] line = br.readLine().split(" ");
                int N = Integer.parseInt(line[0]);
                int K = Integer.parseInt(line[1]);
                char[][] A = new char[N][N];
                for(int i_A=0; i_A<N; i_A++){
                	String[] arr_A = br.readLine().split(" ");
                	for(int j_A=0; j_A<arr_A.length; j_A++){
                		A[i_A][j_A] = arr_A[j_A].charAt(0);
                	}
                }
                int out_ = solution(A, K);
                wr.write(out_+"");
                wr.write('\n');
            }
            catch(Exception e){
                wr.write(0+"");
                wr.write('\n');
            }
        }
        wr.close();
        br.close();
    }
    static int solution(char[][] arr, int k) {
		int c = 0;
		for(int i=0;i<arr.length;i++) {
			for(int j=0;j<arr.length;j++) {
				if(arr[i][j]=='P') {
					int t=get(arr[i], k, i, j);
					if (t != -1) {
						arr[i][t] = 'Q';
						c++;
					}
				}
			}
		}
		return c;
	}

	private static int get(char[] arr, int k, int i, int j) {
		int range = ((j-k)>-1)?(j-k):0;
		for(int z = range; z<=j; z++){
			if(arr[z]=='T')return z;
		}
		range = ((j+k)>=arr.length)? arr.length-1:(j+k);
		for(int z = j; z<=range; z++){
			if(arr[z]=='T')return z;
		}
		return -1;
	}
}
