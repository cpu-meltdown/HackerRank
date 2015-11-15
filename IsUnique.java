//Determine if a string has unique characters (a-z)
import java.io.FileReader;
import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Solution {
	
	public static void main (String[] args){
		
		Scanner kbdScanner = new Scanner(System.in);
		String str = new String ();
		str = kbdScanner.nextLine();
		int arr[] = new int[26];
		for (int i = 0; i < str.length(); i++){
			arr[str.charAt(i)%26]++;
		}
		boolean unique = true;
		for (int i = 0; i < arr.length; i++){
			if (arr[i] > 1){
				unique = false;
				break;
			}
		}
		System.out.println(unique);
	}
}