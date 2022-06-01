class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Brute force by sorting
//         vector<string> temp = strs;
//         for(int i = 0; i < temp.size(); i++){
//             sort(temp[i].begin(), temp[i].end());
//         }
        
//         vector<vector<string>> ans;
//         vector<int> ch(strs.size(), 0);
//         for(int i = 0; i < temp.size(); i++){
//             vector<string> res;
//             if(!ch[i]){
//                 res.push_back(strs[i]);
//                 ch[i] = 1;
//             } 
//             for(int j = i + 1; j < temp.size(); j++){
//                 if(temp[i] == temp[j] && !ch[j]){
//                     res.push_back(strs[j]);
//                     ch[j] = 1;
//                 }
//             }
//             if(res.size()) ans.push_back(res);
//         }
        
        map<vector<int>, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++){
            vector<int> chars(26, 0);
            for(auto ch : strs[i]){
                chars[ch - 'a']++;
            }
            mp[chars].push_back(strs[i]);
        }
        
        vector<vector<string>> ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }                                  
};