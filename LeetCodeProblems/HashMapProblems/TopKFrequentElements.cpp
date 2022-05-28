class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<pair<int, int>> arr;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto it : mp){
            arr.push_back({it.first, it.second});
        }
        
        sort(arr.begin(), arr.end(), cmp);
        
        for(int i = 0; i < k; i++){
            res.emplace_back(arr[i].first);   
        }
        
        return res;
    }
    
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }
};