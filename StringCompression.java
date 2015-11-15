//Compresses strings

import java.io.FileReader;
import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Solution {
	
	public static void main (String[] args){
		
		Scanner kbdScanner = new Scanner(System.in);
		String str1 = kbdScanner.nextLine();
		String str2 = new String();
		int count = 0;
		int i = 0;
		while (i < str1.length()){
			count = i;
			while (count < str1.length() && str1.charAt(count) == str1.charAt(i))
				count++;
			str2 += str1.substring(i,i+1) + (count - i);
			i += count - i;
		}
		if (str2.length() < str1.length())
			System.out.println(str2);
		else
			System.out.println(str1);
	}
}