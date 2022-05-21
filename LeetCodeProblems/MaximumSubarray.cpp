class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxVal = -9999999999;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(maxVal < sum){
                maxVal = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        
        return maxVal;
    }
};