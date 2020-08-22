import java.util.*;
public class Solution {
    public static boolean checkPermutation3(String a, String b) {
        if(a.length() != b.length()) return false;
        char[] s1 = a.toCharArray(), s2 = b.toCharArray();
        Arrays.sort(s1);
        Arrays.sort(s2);
        return new String(s1).equals(new String(s2));
    }
    public static boolean checkPermutation2(String a, String b) {
        if(a.length() != b.length()) return false;
        HashMap<Character, Integer> lookup = new HashMap<>();
        char[] s1 = a.toCharArray(), s2 = b.toCharArray();
        for(char c: s1) {
            if(lookup.containsKey(c))
                lookup.put(c, lookup.get(c)+1);
            else lookup.put(c, 1);
        }
        for(char c: s2) {
            if(lookup.containsKey(c)) {
                int t = lookup.get(c);
                if(t==1) lookup.remove(c);
                else lookup.put(c, t-1);
            }
            else return false;
        }
        return (lookup.size() == 0)?true:false;
    }
    public static boolean checkPermutation1(String a, String b) {
        if(a.length() != b.length()) return false;
        int[] arr = new int[128];
        char[] s1 = a.toCharArray(), s2 = b.toCharArray();
        for(char c: s1) arr[c]++;
        for(char c: s2){
            arr[c]--;
            if(arr[c]<0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        System.out.println("Result: " + checkPermutation1(s1, s2));
        System.out.println("Result: " + checkPermutation2(s1, s2));
        System.out.println("Result: " + checkPermutation3(s1, s2));
    }
}