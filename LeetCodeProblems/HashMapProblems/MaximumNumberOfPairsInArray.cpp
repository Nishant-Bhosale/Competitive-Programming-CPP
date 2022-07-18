class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int, int> mp;
        vector<int> res(2, 0);
        
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        int pCnt = 0;
        for(auto it : mp){
            pCnt += it.second / 2;
            mp[it.first] = it.second - (it.second / 2) * 2; 
        }
        
        int remCnt = 0;
        for(auto it : mp){
            remCnt += it.second;
        }
        
        res[0] = pCnt;
        res[1] = remCnt;
        return res;
    }
};