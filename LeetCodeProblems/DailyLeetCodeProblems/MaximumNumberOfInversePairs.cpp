class Solution {
public:
int kInversePairs(int n, int k) {
    int dp[2][1001] = { 1 };
    for (int N = 1; N <= n; ++N)
        for (int K = 0; K <= k; ++K) {
            dp[N % 2][K] = (dp[(N - 1) % 2][K] + (K > 0 ? dp[N % 2][K - 1] : 0)) %         1000000007;
            if (K >= N)
                dp[N % 2][K] = (1000000007 + dp[N % 2][K] - dp[(N - 1) % 2][K - N]) %       1000000007;
        }
    return dp[n % 2][k];
}
// public:
//     int kInversePairs(int n, int k) {
//         vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
        
//         for(int i = 1; i <= n; i++){
//             for(int j = 0; j <= k; j++){
//                 if(j == 0){
//                     dp[i][j] = 1;
//                 }else{
//                     for(int p = 0; p <= min(j, i - 1); p++){
//                         dp[i][j] = (dp[i][j] + dp[i - 1][j - p]) % 1000000007;
//                     }
//                 }
//             }
//         }
        
//         return dp[n][k];
        
        
    // }
};