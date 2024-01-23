class Solution {
    public static int coinChange(int[] coins, int amount) {
        Arrays.sort(coins);

        int[] dp = new int[amount+1];
        Arrays.fill(dp, -1);
        dp[0] = 0;

        for (int i = 1; i < dp.length; i++) {
            int currMin = Integer.MAX_VALUE;
            for (int coin = 0; coin < coins.length; coin++) {
                if(i - coins[coin] == 0) {
                    currMin = 1;
                    break;
                } else if (i - coins[coin] > 0 && dp[coins[coin]] != -1 && dp[i - coins[coin]] != -1) {
                    currMin = Math.min(currMin, dp[coins[coin]] + dp[i - coins[coin]]);
                } else if (coins[coin] > i){
                    break;
                }
            }
            dp[i] = currMin == Integer.MAX_VALUE ? -1 : currMin;
        }

        return dp[amount];
    }
}