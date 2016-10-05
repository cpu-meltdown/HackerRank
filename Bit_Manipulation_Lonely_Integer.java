import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

	private static int getLonelyNumber ( int[] a){
		Map<Integer, Integer> tempMap = new HashMap<Integer,Integer>();
		int result = 0;
		
		for (int i : a){
			if (tempMap.containsKey(i)){
				tempMap.put(i, 2);
			}
			else{
				tempMap.put (i, 1);
			}
		}
		
		for (Entry<Integer, Integer> entry : tempMap.keySet()){
			if (entry.getValue() == 1)
				result = entry.getKey();
		}
		
		return result;
	}
	
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
		System.out.println(getLonelyNumber(a));
    }
}
