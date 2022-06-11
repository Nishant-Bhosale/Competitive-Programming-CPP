class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        // map<int, int> mp;
        int sum = 0;
        int n = nums.size();
        // Solution using map
//         for(int i = 0; i < n; i++){
//             sum += nums[i];
//             mp[sum] = i;
//         }
        
//         mp[0] = -1;
//         int ans = INT_MIN;
//         int target = sum - x;
//         if(target < 0) return -1;
//         sum = 0;
//         for(int i = 0; i < nums.size(); i++){
//             sum += nums[i];
//             if(mp.find(sum - target) != mp.end()){
//                 ans = max(ans, i - mp[sum - target]);
//             }
//         }
        
        // Solution using sliding window
        
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        
        int ans = INT_MIN;
        int target = sum - x;
        int newSum = 0;
        int start = 0;
        
        for(int end = 0; end < n; end++){
            newSum += nums[end];
            while(newSum > target && start <= end){
                newSum -= nums[start];
                start++;
            }
            
            if(newSum == target){
                ans = max(ans, end - start + 1);
            }
        }
        
        return (ans == INT_MIN ? -1 : n - ans);
    }
};