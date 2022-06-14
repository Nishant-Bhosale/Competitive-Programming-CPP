class Solution {
public:
    int minDistance(string word1, string word2) {
        if(word1 == word2) return 0;
        
        vector<vector<int>> dp(word1.size() + 1, vector<int>(word2.size() + 1, 0));
         int n = word1.size(), m = word2.size();

        for(int i = n - 1; i >= 0; i--){
            for(int j = m - 1; j >= 0; j--){
                if(word1[i] == word2[j]){
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                }else{
                    dp[i][j] = max(dp[i][j + 1], dp[i + 1][j]);
                }
            }
        }

        return n + m - 2*dp[0][0];
    }
};