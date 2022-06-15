class Solution {
public:
    int longestStrChain(vector<string>& words) {
        if(words.empty()) return 0;
        
        sort(words.begin(), words.end(), compare);
        vector<int> dp(words.size(), 1);
        int ans = 1;
        for(int i = 1; i < words.size(); i++){
            for(int j = 0; j < i; j++){
                int x = words[i].size(), y = words[j].size();
                if(y + 1 == x && checkStrs(words[j], words[i]) && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                }
                ans = max(ans, dp[i]);
            }
        }
        
        return ans;
    }

public:
    bool checkStrs(string& s, string t){
        if(t.size() != s.size() + 1) return false;
        int i = 0, j = 0, missing = 0;
        
        for(i = 0; i < t.size(); i++){
            if(t[i] == s[j]){
                j++;
            }else{
                if(!missing){
                    missing = 1;
                }else{
                    return false;
                }
            }
        }
        
        return true;
    }
public:
    static bool compare(const string s, const string t){
        return s.size() < t.size();
    }
};