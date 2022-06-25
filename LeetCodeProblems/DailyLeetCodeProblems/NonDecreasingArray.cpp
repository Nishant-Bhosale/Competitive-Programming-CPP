class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                if(i-1 >= 0 && nums[i-1] > nums[i+1]){
                    nums[i+1] = nums[i];
                }else{
                    nums[i] = nums[i + 1];
                }
                
                break;
            }
        }
        
        if(is_sorted(begin(nums), end(nums))) return true;
        
        return false;
    }
};