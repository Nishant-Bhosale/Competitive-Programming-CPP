class Solution {
public:
    int countVowelPermutation(int n) {
        const int MOD = 1e9 + 7;
        long dp[5][n+1], ans = 0;
        dp[0][1] = dp[1][1] = dp[2][1] = dp[3][1] = dp[4][1] = 1;
        
        for(int i = 2; i < n + 1; i++) {
            dp[0][i] =  dp[1][i-1];
            dp[1][i] = (dp[0][i-1] + dp[2][i-1]) % MOD;
            dp[2][i] = (dp[0][i-1] + dp[1][i-1] + dp[3][i-1] + dp[4][i-1]) % MOD;
            dp[3][i] = (dp[2][i-1] + dp[4][i-1]) % MOD;
            dp[4][i] =  dp[0][i-1];
        }
        
        for(int i=0; i < 5; i++) 
            ans = (ans + dp[i][n]) % MOD;
        return ans;
    }
};