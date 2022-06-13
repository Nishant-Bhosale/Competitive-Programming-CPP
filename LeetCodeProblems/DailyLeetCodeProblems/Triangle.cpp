class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int ans = 0;
        int n = triangle.size();
        
        vector<int> dp(n + 1, 0);
        
        for(int i = n - 1; i >= 0; i--){
            for(int j = 0; j < triangle[i].size(); j++){
                dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
            }
        }
        
        return dp[0];
    }
};