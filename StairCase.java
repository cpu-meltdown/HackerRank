import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner consoleScanner = new Scanner(System.in);
        int n = consoleScanner.nextInt();
        for (int i=0; i<n; i++){
            int j=i+1;
            String str = new String();
            str = "";
            while (j>0){
                str +="#";
                j--;
            }
            System.out.printf("%"+n+"s%n",str);
        }
    }
}