class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        
        long long consec = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                consec++;
            }else{
                ans += (consec*(consec + 1)) / 2;
                consec = 0;
            }
        }
        
        ans += (consec*(consec + 1)) / 2;
        
        return ans;
    }
};