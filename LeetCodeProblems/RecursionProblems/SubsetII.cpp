class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        getSubsets(0, temp, ans, nums);
        return ans;
    }
    
public:
    void getSubsets(int idx, vector<int>& temp, vector<vector<int>>& ans, vector<int>& nums){
        ans.push_back(temp);
        
        for(int i = idx; i < nums.size(); i++){
            if(idx < i && nums[i] == nums[i - 1]) continue; 
            temp.push_back(nums[i]);
            getSubsets(i + 1, temp, ans, nums);
            temp.pop_back();
        }
    }
};