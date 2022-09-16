class Solution {
public:
    //It should be mentioned in the question that we can take an element from multipliers in order(i.e. from i=0 to i=m-1)
    //it's a 2d dp
    vector<vector<int>> dp;
    int solve(int i,int n,int k,vector<int> &nums,vector<int> &mums){
        if(k==mums.size()){
            return 0;
        }
        if(dp[i][k]!=INT_MIN)return dp[i][k];
        int x=solve(i+1,n,k+1,nums,mums)+(nums[i]*mums[k]);
        int y=solve(i,n,k+1,nums,mums)+(nums[(n-1)-(k-i)]*mums[k]);
        return dp[i][k]=max(x,y);
    }
    int maximumScore(vector<int>& nums, vector<int>& mums) {
        int n=nums.size(), m=mums.size();
        dp.resize(m+1,vector<int>(m+1,INT_MIN));
        return solve(0,n,0,nums,mums);
    }
};