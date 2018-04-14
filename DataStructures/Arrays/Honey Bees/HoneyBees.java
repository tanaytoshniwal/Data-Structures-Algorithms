import java.util.*;
import java.io.*;
class TestClass{
    public static void main(String[] args) throws Exception{
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt(), m=sc.nextInt();
            int[][] arr = new int[n][m];
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                    arr[i][j]=sc.nextInt();
            int q=sc.nextInt();
            while(q-->0){
                int hop=sc.nextInt(), i=sc.nextInt(), j=sc.nextInt();
                int sum=0;
                if(hop==1){
                    if(j+1 < m){
                        sum += arr[i][j+1];
                    }
                    if(j-1 >= 0){
                        sum += arr[i][j-1];
                    }
                    if(i-1 >= 0){
                        sum += arr[i-1][j];
                        if(j%2 == 0){
                            if(j-1 >= 0)
                                sum += arr[i-1][j-1];
                            if(j+1 < m)
                                sum += arr[i-1][j+1];
                        }
                    }
                    if(i+1 < n){
                        sum += arr[i+1][j];
                        if(j%2 == 1){
                            if(j-1 >= 0)
                                sum += arr[i+1][j-1];
                            if(j+1 < m)
                                sum += arr[i+1][j+1];

                        }
                    }
                }
                else{
                    if(i+2 < n){
                        sum += arr[i+2][j];
                        if(j%2 == 1){
                            if(j-1 >= 0)
                                sum += arr[i+2][j-1];
                            if(j+1 < m)
                                sum += arr[i+2][j+1];
                        }else{
                            if(j-1 >= 0)
                                sum += arr[i+1][j-1];
                            if(j+1 < m)
                                sum += arr[i+1][j+1];
                        }
                    }else{
                        if(i+1 < n){
                            if(j%2 == 0){
                                if(j-1 >= 0)
                                    sum += arr[i+1][j-1];
                                if(j+1 < m)
                                    sum += arr[i+1][j+1];
                            }
                        }
                    }
                    if(i-2 >= 0){
                        sum += arr[i-2][j];
                        if(j%2==1){
                            if(j-1 >= 0)
                                sum += arr[i-1][j-1];
                            if(j+1 < m)
                                sum += arr[i-1][j+1];
                        }else{
                            if(j-1 >= 0)
                                sum += arr[i-2][j-1];
                            if(j+1 < m)
                                sum += arr[i-2][j+1];
                        }
                    }else{
                        if(i-2 >= 0){
                            if(j%2==1){
                                if(j-1 >= 0)
                                    sum += arr[i-1][j-1];
                                if(j+1 < m)
                                    sum += arr[i-1][j+1];
                            }
                        }
                    }
                    if(j+2 < m){
                        sum += arr[i][j+2];
                        if(i-1 >= 0)
                            sum += arr[i-1][j+2];
                        if(i+1 < n)
                            sum += arr[i+1][j+2];
                    }
                    if(j-2 >= 0){
                        sum += arr[i][j-2];
                        if(i-1 >= 0)
                            sum += arr[i-1][j-2];
                        if(i+1 < n)
                            sum += arr[i+1][j-2];
                    }
                }
                System.out.println(sum);
            }
        }
    }
}
