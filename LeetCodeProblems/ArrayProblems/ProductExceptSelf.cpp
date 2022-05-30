class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         int mul = 1;
//         int zeroes = 0;
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] != 0){
//                 mul *= nums[i];
//             }
//             if(nums[i] == 0){
//                 zeroes++;
//             }
//         }
        
//         vector<int> res;
//         for(int i = 0; i < nums.size(); i++){
//             if(zeroes == 0){
//                 res.emplace_back(mul / nums[i]);
//                 continue;
//             }
//             if(zeroes >= 1 && nums[i] != 0){
//                 res.emplace_back(0);
//                 continue;
//             }
//             if(nums[i] == 0 && zeroes == 1){
//                 res.emplace_back(mul);
//                 continue;
//             }
//             if(nums[i] == 0 && zeroes > 1){
//                 res.emplace_back(0);
//             }
//         }
        int n = nums.size();
        vector<int> res(n);
        
        res[0] = 1;
        int pre = 1;
        for(int i = 0; i < n; i++){
            pre *= nums[i];
            if(i != n - 1){
                res[i + 1] = pre;
            }
        }
        int post = 1;
        for(int i = n - 1; i >= 0; i--){
            res[i] *= post;
            post *= nums[i];

        }
        
        return res;
    }
};