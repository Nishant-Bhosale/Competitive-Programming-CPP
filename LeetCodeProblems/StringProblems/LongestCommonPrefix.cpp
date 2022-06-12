class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int minSize = INT_MAX;
        for(int i = 0; i < strs.size(); i++){
            int sz = strs[i].size();
            if(sz < minSize){
                ans = strs[i];
                minSize = sz;                
            }
        }
        
        int j = 0;
        while(true){
            if(j > minSize) break;
            bool flag = true;
            for(int i = 0; i < strs.size() - 1; i++){
                if(strs[i][j] != strs[i + 1][j]){
                    flag = false;
                    break;
                }
            } 
            if(!flag) break;
            j++;
        }
        
        return ans.substr(0, j);
    }
};