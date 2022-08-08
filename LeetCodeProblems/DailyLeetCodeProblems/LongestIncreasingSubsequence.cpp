class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        
        for(int i = nums.size() - 1; i >= 0; i--){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] < nums[j]){
                    ans[i] = max(ans[i], 1 + ans[j]);
                }
            }
        }
        return *max_element(ans.begin(), ans.end());
    }
};