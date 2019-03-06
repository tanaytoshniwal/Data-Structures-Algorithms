import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), hit = sc.nextInt(), t = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++) arr[i] = sc.nextInt();
        Arrays.sort(arr);
        int c = 0;
        for(int i=0;i<n&&t>0;t--,i++){
            arr[i]-=hit;
            if(arr[i]<1)c++;
            else i--;
        }
        System.out.println(c);
    }
}