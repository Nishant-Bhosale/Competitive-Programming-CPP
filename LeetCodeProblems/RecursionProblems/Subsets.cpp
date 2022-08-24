class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        getSubsets(0, temp, nums);
        return ans;
    }
public: 
    void getSubsets(int i, vector<int>& temp, vector<int>& nums){
        if(i >= nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        getSubsets(i + 1, temp, nums);
        temp.pop_back();
        getSubsets(i + 1, temp, nums);
    }
};