class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, vector<int>> mp;
        
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        int ans = 0;
        for(auto it : mp){
            ans += (it.second.size() - 1)*(it.second.size()) / 2;
        }
        return ans;
    }
};