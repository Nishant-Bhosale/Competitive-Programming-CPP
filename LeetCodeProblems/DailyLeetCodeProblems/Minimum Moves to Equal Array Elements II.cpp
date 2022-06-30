class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int ans = 0;
        if(n % 2 != 0){
            int midVal = nums[n/2];
            
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == midVal) continue;
                
                ans += abs(midVal - nums[i]);
            }
        }else{
            int midVal = (nums[n / 2] + nums[n / 2 - 1]) / 2;
            
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == midVal) continue;
                
                ans += abs(midVal - nums[i]);
            }
        }
        
        return ans;
    } 
};