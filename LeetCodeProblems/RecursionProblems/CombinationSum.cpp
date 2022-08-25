class Solution {
vector<vector<int>> ans;

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        getSubsequences(0, temp, candidates, target);
        return ans;
    }
public:
    void getSubsequences(int i, vector<int>& temp, vector<int>& candidates, int target){
        if(i == candidates.size()){
            if(target == 0){
                ans.push_back(temp);            
            }
            return;
        }
        
        if(target >= candidates[i]){
            temp.push_back(candidates[i]);
            getSubsequences(i, temp, candidates, target - candidates[i]);
            temp.pop_back();
        }
        getSubsequences(i + 1, temp, candidates, target);
    }
};