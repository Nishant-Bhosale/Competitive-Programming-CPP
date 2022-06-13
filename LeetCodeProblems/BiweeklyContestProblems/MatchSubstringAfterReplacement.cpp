class Solution {
public:
    bool matchReplacement(string s, string t, vector<vector<char>>& mappings) {
        if(s.size() < t.size()) return false;
        if(s.find(t, 0) != string::npos) return true;
        
        unordered_map<char, unordered_set<char>> mp;
        
        for(auto map : mappings){
            mp[map[0]].insert(map[1]);
        }
        
        int n = s.size();
        int m = t.size();
        
        for(int i = 0; i <= n - m; i++){
            int k;
            for(k = 0; k < m; k++){
                if(t[k] == s[i + k]){
                    continue;   
                }
               if(mp[t[k]].count(s[i + k]) && mp.count(t[k])){
                   continue;
               }
                break;
            }
            if(k == m) return true;
        }
        
        return false;
    }
};