//Determine if a string is a permutation of an other.

import java.io.FileReader;
import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Solution {
	
	public static void main (String[] args){
		
		Scanner kbdScanner = new Scanner(System.in);
		String str1 = kbdScanner.nextLine();
		String str2 = kbdScanner.nextLine();
		int arr1[] = new int[26];
		int arr2[] = new int[26];
		for (int i = 0; i < str1.length(); i++){
			arr1[str1.charAt(i)%26]++;
		}
		for (int i = 0; i < str2.length(); i++){
			arr2[str2.charAt(i)%26]++;
		}
		boolean permutation = true;
		for (int i = 0; i < arr1.length; i++){
			if (arr1[i] != arr2[i]){
				permutation = false;
				break;
			}
		}
		System.out.println(permutation);
	}
}