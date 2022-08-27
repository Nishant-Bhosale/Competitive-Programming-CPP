class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        // vector<int> arr;
        // vector<int> visited(nums.size(), 0);
        // getAllPermutations(visited, arr, ans, nums);
        getAllPermutations(0, ans, nums);
        return ans;
    }

// public:
//     void getAllPermutations(vector<int>& visited, vector<int>& arr, vector<vector<int>>& ans, vector<int>& nums){
//         if(arr.size() == nums.size()){
//             ans.push_back(arr);
//             return;
//         }

//         for(int i = 0; i < nums.size(); i++){
//             if(!visited[i]){
//                 arr.push_back(nums[i]); 
//                 visited[i] = 1;   
//                 getAllPermutations(visited, arr, ans, nums);
//                 arr.pop_back();
//                 visited[i] = 0;
//             }   
//         }
//     }

public:
    void getAllPermutations(int idx, vector<vector<int>>& ans, vector<int>& nums){
        if(idx >= nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i = idx; i < nums.size(); i++){
                swap(nums[idx], nums[i]);
                getAllPermutations(idx + 1, ans, nums);
                swap(nums[i], nums[idx]);
        }
    }
};