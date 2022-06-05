class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());
        
        int cnt = 0;
        int firstVal = nums[0];
        
        for(int i = 0; i < nums.size(); i++){
            if(firstVal - nums[i] > k){
                cnt++;
                firstVal = nums[i];
            }
        }
        
        cnt++;
        return cnt;
    }
};