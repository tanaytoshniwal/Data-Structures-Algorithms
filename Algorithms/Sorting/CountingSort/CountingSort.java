import java.util.*;
import java.io.*;
class CountingSort {
    public static void main(String[] args) throws Exception {
        System.out.print("Input size of the array:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        char[] input = new char[n];
        char[] output = new char[n];
        int[] chars = new int[256];
        Arrays.fill(chars, 0);
        System.out.println("Input "+n+" elements:");
        for(int i=0;i<n;i++){
            input[i] = sc.next().charAt(0);
            ++chars[input[i]];
        }
        for(int i=1;i<256;i++)
            chars[i]=chars[i]+chars[i-1];
        for (int i = 0; i<n; i++){
            output[chars[input[i]]-1] = input[i];
            --chars[input[i]];
        }
        System.out.println("Sorted Array:");
        for(int i=0;i<n;i++)
            System.out.print(output[i]+" ");
    }
}
