import java.io.*;
import java.util.*;

public class Solution {
    private static int min(int x, int y) {
        return (x < y)? x : y;
    }
    private static int minCost(int cost[][], int m, int n) {
        int i, j;
        int tc[][]=new int[m+1][n+1];
        tc[0][0] = cost[0][0];
        for (i = 1; i <= m; i++)
            tc[i][0] = tc[i-1][0] + cost[i][0];
        for (j = 1; j <= n; j++)
            tc[0][j] = tc[0][j-1] + cost[0][j];
        for (i = 1; i <= m; i++)
            for (j = 1; j <= n; j++)
                tc[i][j] = min(tc[i-1][j], tc[i][j-1])+cost[i][j];
        return tc[m][n];
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt(), m=sc.nextInt();
        int arr[][] = new int[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                arr[i][j] = sc.nextInt();
        System.out.println(minCost(arr, n-1, m-1));
    }
}
