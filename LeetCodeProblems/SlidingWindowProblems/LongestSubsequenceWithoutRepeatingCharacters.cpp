class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0){
            return 0;
        }
        
        int ans = 0;
        int left = 0, right = 0;
        set<char> st;
        
        while(right < s.size()){
            if(st.count(s[right]) == 0){
                st.insert(s[right]);
                ans = max(ans, (int)st.size());
                right++;
            }else{
                st.erase(s[left]);
                left++;
            }
        }
        
        return ans;
    }
};