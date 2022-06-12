class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0;
        int maxScore = 0;
        
        set<int> st;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            while(st.find(nums[i]) != st.end()){
                sum -= nums[left];
                st.erase(nums[left]);
                left++;
            }
            sum += nums[i];
            st.insert(nums[i]);
            maxScore = max(maxScore, sum);
        }
        
        return maxScore;
    }
};