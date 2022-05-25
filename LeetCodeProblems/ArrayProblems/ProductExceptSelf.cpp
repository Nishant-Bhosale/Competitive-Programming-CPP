class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1;
        int zeroes = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                mul *= nums[i];
            }
            if(nums[i] == 0){
                zeroes++;
            }
        }
        
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            if(zeroes == 0){
                res.emplace_back(mul / nums[i]);
                continue;
            }
            if(zeroes >= 1 && nums[i] != 0){
                res.emplace_back(0);
                continue;
            }
            if(nums[i] == 0 && zeroes == 1){
                res.emplace_back(mul);
                continue;
            }
            if(nums[i] == 0 && zeroes > 1){
                res.emplace_back(0);
            }
        }
        
        return res;
    }
};