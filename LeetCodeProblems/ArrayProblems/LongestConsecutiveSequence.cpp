class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        // sort(nums.begin(), nums.end());
        // nums.resize(distance(nums.begin(), unique(nums.begin(), nums.end())));
        // int ans = 1;
        // int cnt = 1;
        // for(int i = 0; i < nums.size() - 1; i++){
        //     if(nums[i + 1] == nums[i] + 1){
        //         cnt++;
        //     }else{
        //         cnt = 1;
        //     }
        //     ans = max(ans, cnt);
        // }
        
        set<int> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        
        int ans = 1;
        
        for(int i : st){
            if(!st.count(i - 1)){
                int temp = i + 1;
                int cnt = 1;
                while(st.count(temp)){
                    temp++;
                    cnt++;
                }
                ans = max(cnt, ans);
            }
        }
        
        return ans;
    }
};