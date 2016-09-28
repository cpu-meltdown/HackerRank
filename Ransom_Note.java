import java.util.HashMap;
import java.util.Map.Entry;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int m = in.nextInt();
		int n = in.nextInt();
		String magazine[] = new String[m];
		for (int magazine_i = 0; magazine_i < m; magazine_i++) {
			magazine[magazine_i] = in.next();
		}
		String ransom[] = new String[n];
		for (int ransom_i = 0; ransom_i < n; ransom_i++) {
			ransom[ransom_i] = in.next();
		}

		solve(ransom, magazine);
	}

	private static void solve(String ransom[], String magazine[]) {

		HashMap<String, Integer> mWords = new HashMap<String, Integer>();
		HashMap<String, Integer> rWords = new HashMap<String, Integer>();
		boolean res = true;

		for (int i = 0; i < magazine.length; i++) {
			mWords.put(magazine[i], (mWords.containsKey(magazine[i])) ? mWords.get(magazine[i]) + 1 : 1);
		}

		for (int i = 0; i < ransom.length; i++) {
			rWords.put(ransom[i], (rWords.containsKey(ransom[i])) ? rWords.get(ransom[i]) + 1 : 1);
		}

		for (String str : rWords.keySet()) {
			if (!mWords.containsKey(str) || (mWords.get(str) < rWords.get(str))) {
				res = false;
				break;
			}
		}
		System.out.println(res ? "Yes" : "No");
	}
}
