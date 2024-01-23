class Solution {
    public int climbStairs(int n) {
        if (n == 1) {
            return 1;
        } else if (n == 2) { 
            return 2;
        } else {
            int one = 2;
            int two = 1;
            int res = 0;
            for (int i = 3; i <= n; i++) {
                res = one + two;
                two = one;
                one = res;
            }

            return res;
        }
    }
}