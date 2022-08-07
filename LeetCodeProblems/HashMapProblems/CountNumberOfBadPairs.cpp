class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        
        long long ans = 0;
        map<long long, long long> mp;
        for(int i = 0; i < nums.size(); i++){
            long long diff = i - nums[i];
            if(mp.count(i - nums[i])){
                ans += (i - mp[diff]);
            }else{
                ans += i;
            }
            
            mp[diff]++;
        }
        
        return ans;
    }
};