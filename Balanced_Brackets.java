import java.util.Scanner;
import java.util.Stack;

public class Solution {
     public static boolean isBalanced(String expression) {
     
    	 Stack<Character> s = new Stack<Character>();
    	 
    	 int i = 0;
    	 if ( (expression.charAt(i) == '{') || (expression.charAt(i) == '[') || (expression.charAt(i) == '(') ){
    		 s.push(expression.charAt(i++));
    	 }
    	 while ( i < expression.length() ){
    		 
    		 if ( (expression.charAt(i) == '{') || (expression.charAt(i) == '[') || (expression.charAt(i) == '(') ){
    			 s.push(expression.charAt(i));
    		 }
    		 else {
    			 if(s.isEmpty()){
 					return false;
 				}
 				Character opening = s.peek();
 				if( (expression.charAt(i) == ')') && (opening == '(')){
 					s.pop();
 				}
 				if( (expression.charAt(i) == ']') && (opening == '[')){
 					s.pop();
 				}
 				if( (expression.charAt(i) == '}') && (opening == '{')){
 					s.pop();
 				}
    		 }
    		 
    		 i++;
    	 }
    	 
    	 if( expression.length() > 0 && s.isEmpty()){
 			return true;
 		}
    	 else {
    		 return false;
    	 }
     }
  
   public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        for(int a0 = 0; a0 < t; a0++) {
            String expression = in.nextLine();
             boolean answer = isBalanced(expression);
             if(answer)
              System.out.println("YES");
             else System.out.println("NO");
        }
    }
}
