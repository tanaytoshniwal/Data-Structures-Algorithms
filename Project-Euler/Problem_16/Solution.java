import java.math.BigInteger;
import java.util.*;

class Solution{
    public static void main(String[] args){
        String temp = BigInteger.ONE.shiftLeft(1000).toString();
		int sum = 0;
		for (int i = 0; i < temp.length(); i++)
			sum += temp.charAt(i) - '0';
		System.out.println(Integer.toString(sum));
    }
}