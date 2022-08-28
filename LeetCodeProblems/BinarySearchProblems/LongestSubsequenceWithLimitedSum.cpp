class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            nums[i] = nums[i] + nums[i - 1];
        }
        int ans = 0;
        
        for(int i = 0; i < queries.size(); i++){
            auto it = upper_bound(nums.begin(), nums.end(), queries[i]);
            queries[i] = it - nums.begin();
        }

        return queries;
    }
};