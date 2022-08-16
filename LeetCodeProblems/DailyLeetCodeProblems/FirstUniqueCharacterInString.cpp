class Solution {
public:
    int firstUniqChar(string s) {
        int idx = INT_MAX;
        
        map<char, pair<int,int>> mp;
        for(int i = 0; i < s.size(); i++){
            if(mp.count(s[i])){
                mp[s[i]].first++;
                continue;
            }
            mp[s[i]] = {1, i};
        }
        
        for(auto it : mp){
            if(it.second.first <= 1){
                idx = min(idx, it.second.second);
            }
        }
        
        return idx == INT_MAX ? -1 : idx;
    }
};