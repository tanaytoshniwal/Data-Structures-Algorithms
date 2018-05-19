import java.util.*;
import java.io.*;
class CountingSort {
    /*void sort(char arr){
        int n = arr.length;
        char output[] = new char[n];
        int count[] = new int[256];
        for (int i=0; i<256; ++i)
            count[i] = 0;

        for (int i=0; i<n; ++i)
            ++count[arr[i]];
        for (int i=1; i<=255; ++i)
            count[i] += count[i-1];
        for (int i = 0; i<n; ++i){
            output[count[arr[i]]-1] = arr[i];
            --count[arr[i]];
        }
        for (int i = 0; i<n; ++i)
            arr[i] = output[i];
    }*/
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
            System.out.println(chars[input[i]]+"::::::"+input[i]+":::"+i);
        }
        for(int i=1;i<256;i++){
            chars[i]=chars[i]+chars[i+1];
            if(chars[i]!=0)
            System.out.println(i+":::"+chars[i]);
        }
        for (int i = 0; i<n; i++){
            output[chars[input[i]]-1] = input[i];
            --chars[input[i]];
        }
        for(int i=0;i<n;i++)
            System.out.print(output[i]+" ");
    }
}
