class Solution {
    
public: 
    void getAllCombinations(int idx, int target, vector<vector<int>>& ans, vector<int>& arr, vector<int>& temp){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        
        for(int i = idx; i < arr.size(); i++){
            if(idx < i && arr[i] == arr[i - 1]) continue;
            if(target < arr[i]) break;

            temp.push_back(arr[i]);
            getAllCombinations(i + 1, target - arr[i], ans, arr, temp);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> ans;
        vector<int> temp;
        getAllCombinations(0, target, ans, arr, temp);
        return ans;
    }
};