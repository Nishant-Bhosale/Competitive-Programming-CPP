class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        // vector<int> res(n + 1, INT_MIN);
        if(n == 1){
            return nums[0];
        }
        
        //Brute Force
      //   for(int i = 0; i < n; i++){
      //    int maxVal = 1;
      //    for(int j = i; j < n; j++){
      //       maxVal *= nums[j];
      //       res[j - i + 1] = max(res[j - i + 1], maxVal);
      //    }
      // }
        
        
            //Optimized
//         int max1 = INT_MIN, max2 = INT_MIN;
//         int pr = 1;
//         for(int i = 0; i < n; i++){
//             pr *= nums[i];

//             max1 = max(max1, pr);
            
//             if(pr == 0){
//                 pr = 1;
//             }
//         }
        
//         pr = 1;
        
//         for(int i = n - 1; i >= 0; i--){
//             pr *= nums[i];
//             max2 = max(max2, pr);
            
//             if(pr == 0){
//                 pr = 1;
//             }
//         }

//         return max(max1, max2);
        
        //Highly Optimized
        
        int res = *max_element(nums.begin(), nums.end());
        int maxTemp = 1, minTemp = 1;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                maxTemp = 1;
                minTemp = 1;
                continue;
            }
            
            int temp = nums[i] * maxTemp;
            maxTemp = max(nums[i] * maxTemp, max(nums[i] * minTemp, nums[i]));
            minTemp = min(temp, min(nums[i] * minTemp, nums[i]));
            
            res = max({maxTemp, res, minTemp});
        }
        
        return res;
    }
};