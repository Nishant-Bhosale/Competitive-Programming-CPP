class Solution {
public:
    int missingNumber(vector<int>& nums) {
       // Brute Force
//         int missingNum = -1;
//         sort(nums.begin(), nums.end());
//         if(nums[0] != 0 || nums.size() == 0){
//             return 0;
//         }
        
//         for(int i = 0; i < nums.size() - 1; i++){
//             if(nums[i] + 1 != nums[i + 1]){
//                 missingNum = nums[i] + 1;
//                 break;
//             }
//         }
        
//         if(missingNum < 0){
//             missingNum = nums[nums.size() - 1] + 1;
//         }
        
//         return missingNum;
        
        int n = nums.size();
        int sum = 0;
        int totalSum = n*(n + 1)/2;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        
        return totalSum - sum;
    }
};