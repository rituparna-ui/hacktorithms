import java.util.Arrays;

/**
 * 01Knapsack
 * @author Samrat Podder
 */
public class Knapsack01 {

    public int maxValue(int[] weights, int[] values, int n, int maxweight, int idx){
        if(idx==0){
            if(maxweight>0 && maxweight>=weights[0]) return values[0];
            return 0;
        }
        if(maxweight<=0) return 0;
        int pick = 0;
        int notpick = 0;
        if (maxweight-weights[idx]>=0) {
            pick += values[idx]+maxValue(weights, values, n, maxweight-weights[idx], idx-1);
        }
        notpick += maxValue(weights, values, n, maxweight, idx-1);
        return Math.max(pick, notpick);
    }

    public int maxValueMemo(int[] weights, int[] values, int n, int maxweight, int idx, int[][] dp){
        if(idx==0){
            if(weights[0]<=maxweight) return values[0];
            return 0;
        }
        if(maxweight<=0) return 0;
        if(dp[idx][maxweight]!=-1) return dp[idx][maxweight];
        int pick = Integer.MIN_VALUE;
        int notpick = 0;
        if (weights[idx]<=maxweight) {
            pick = values[idx]+maxValueMemo(weights, values, n, maxweight-weights[idx], idx-1,dp);
        }
        notpick = maxValueMemo(weights, values, n, maxweight, idx-1,dp);
        dp[idx][maxweight]=Math.max(pick, notpick);
        return dp[idx][maxweight];
    }

    public int maxValueTab(int[] weights, int[] values, int n, int maxweight){
        int[][] dp = new int[n][maxweight+1];
        for (int i = weights[0]; i <= maxweight; i++) {
            dp[0][i] = values[0];
        }
        for (int i = 1; i < n; i++) {
            for (int cap = 0; cap <= maxweight; cap++) {
                int pick = Integer.MIN_VALUE;
                int notpick = 0;
                if (weights[i]<=cap) {
                    pick = values[i]+dp[i-1][cap-weights[i]];
                }
                notpick = dp[i-1][cap];
                dp[i][cap]=Math.max(pick, notpick);
            }
        }
        return dp[n-1][maxweight];
    }

    public int maxValueSO(int[] weights, int[] values, int n, int maxweight){
        int[] dp = new int[maxweight+1];
        for (int i = weights[0]; i <= maxweight; i++) {
            dp[i] = values[0];
        }
        for (int i = 1; i < n; i++) {
            int[] curr = new int[maxweight+1];
            for (int cap = 0; cap <= maxweight; cap++) {
                int pick = Integer.MIN_VALUE;
                int notpick = 0;
                if (weights[i]<=cap) {
                    pick = values[i]+dp[cap-weights[i]];
                }
                notpick = dp[cap];
                curr[cap]=Math.max(pick, notpick);
            }
            dp = curr;
        }
        return dp[maxweight];
    }

    public static void main(String[] args) {
        int[] weights = new int[]{1,2,4,5};
        int[] values = new int[]{5,4,8,6};
        int maxweight = 5;
        int[][] dp = new int[4+1][maxweight+1];
        for (int[] is : dp) {
            Arrays.fill(is, -1);
        }
        System.out.println(new Knapsack01().maxValue(weights, values, 4, maxweight,4-1));
        System.out.println(new Knapsack01().maxValueMemo(weights, values, 4, maxweight,4-1,dp));
        System.out.println(new Knapsack01().maxValueTab(weights, values, 4, maxweight));
        System.out.println(new Knapsack01().maxValueSO(weights, values, 4, maxweight));
    }
}