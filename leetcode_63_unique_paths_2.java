class Solution {
    public int uniquePathsWithObstacles(int[][] og) {
        int rows = og.length;
        int cols = og[0].length;
        int[][] dp = new int[rows][cols];

        if (rows == 1 && cols == 1) {
            return og[0][0] == 1 ? 0 : 1;
        }
        for (int i = 0; i < rows; i++){ 
            if (og[i][0] == 1) {
                break;
            }
            dp[i][0] = 1;
        }

        for (int j = 0; j < cols; j++){ 
            if (og[0][j] == 1) {
                break;
            }
            dp[0][j] = 1;
        }

        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if(og[i][j] == 1) {
                    continue;
                }
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }

        return dp[rows-1][cols-1];
    }
}