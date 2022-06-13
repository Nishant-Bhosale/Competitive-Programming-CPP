class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size();
        long long sum = 0, cnt = 0;
        long long left = 0;
        
        for(int i = 0; i < n; i++){
            sum += (long long)nums[i];
            long long mul = sum * (i - left + 1);
            while((long long)(sum * (i - left + 1)) >= k){
                sum -= (long long)nums[left];
                left++;
            }
            cnt += i - left + 1;
        }
        
        return cnt;
    }
};