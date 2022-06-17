class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size()*2);
        
        for(int i = 0; i < nums.size() * 2; i++){
            if(i < nums.size()){
                ans[i] = nums[i];
            }else{
                ans[i] = nums[i % nums.size()];
            }
        }
        
        return ans;
    }
};