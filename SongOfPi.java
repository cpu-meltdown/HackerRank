import java.util.*;

class Solution {
	
	public static void main (String[] args){
		Scanner consoleScanner = new Scanner (System.in);
		String piSong = "31415926535897932384626433833";
		int t = consoleScanner.nextInt();
		String tempStr = "", result = "";
		consoleScanner.nextLine();
		while (t-- > 0){
			tempStr = consoleScanner.nextLine();
			String [] arr = tempStr.split(" ");
			for (int i=0; i<arr.length; i++){
				result += arr[i].length();
			}
			int i=0;
			while (i < result.length() && piSong.charAt(i) == result.charAt(i))
				i++;
			if (i == result.length())
				System.out.println ("It's a pi song.");
			else 
				System.out.println("It's not a pi song.");
			result = "";
		}
	}
}