class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0, j = 0, maxCharFreq = 0, ans = 0;
        map<char, int> mp;
        for(j = 0; j < s.size(); j++){
            mp[s[j]]++;
            maxCharFreq = max(maxCharFreq, mp[s[j]]);
            
            if(j - i + 1 - maxCharFreq > k){
                mp[s[i]]--;
                i++;
            }
            
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};