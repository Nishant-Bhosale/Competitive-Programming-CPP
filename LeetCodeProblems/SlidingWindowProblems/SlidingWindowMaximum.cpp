class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
//         int left = 0, right = k - 1;
        
//         while(right < nums.size()){
//             int maxVal = INT_MIN;
//             for(int i = left; i <= right; i++){
//                 maxVal = max(maxVal, nums[i]);
//             }
//             ans.push_back(maxVal);
//             left++, right++;
//         }
        
        int left = 0, right = 0;
        deque<int> q;
        while(right < nums.size()){
            while(!q.empty() && nums[q.back()] < nums[right]){
                q.pop_back();
            }
            
            q.push_back(right);
            
            if(left > q.front()){
                q.pop_front();
            }
            
            if(right + 1 >= k){
                ans.push_back(nums[q.front()]);
                left++;
            }
            
            right++;
        }
        
        return ans;
    }
};