class Solution {
public:
    bool isPossible(vector<int>& nums) {
        map<int,int> cnt, tails;
        
        for(auto i : nums){
            cnt[i]++;
        }
        
        for(auto i : nums){
            if(!cnt[i]) continue;
            cnt[i]--;
            if(tails[i - 1] > 0){
                tails[i - 1]--;
                tails[i]++;
            }else if(cnt[i + 1] > 0 && cnt[i + 2] > 0){
                tails[i + 2]++;
                cnt[i + 1]--;
                cnt[i + 2]--;
            }else{
                return false;
            }
        }
        
        return true;
    }
};