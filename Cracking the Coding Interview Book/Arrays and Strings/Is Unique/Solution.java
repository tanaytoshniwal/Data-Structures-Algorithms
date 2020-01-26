import java.util.*;
public class Solution{
    // using additional data-structure (hash-set)
    // O(n) - time, O(n) - space
    static boolean isUnique1(char[] str){
        HashSet<Character> set = new HashSet<>();
        for(char c: str)
            set.add(c);
        return set.size() == str.length;
    }
    
    // using sorting algorithm
    // O(nlogn) - time, O(1) - space
    static boolean isUnique2(char[] str){
        Arrays.sort(str);
        for(int i=0;i<str.length-1;i++){
            if(str[i] == str[i+1]) return false;
        }
        return true;
    }
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        System.out.println("Is Unique (Solution 1):" + isUnique1(input.toCharArray()));
        System.out.println("Is Unique (Solution 2):" + isUnique2(input.toCharArray()));
    }
}