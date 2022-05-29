class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        if(s.size() < target.size()){
            return 0;
        }

        vector<int> sArr(26, 0);
        vector<int> tArr(26, 0);
        
        for(int i = 0; i < s.size(); i++){
            sArr[s[i] - 'a']++;
        }
        
        for(int i = 0; i < target.size(); i++){
            tArr[target[i] - 'a']++;
        }
        
        int ans = INT_MAX;
        
        for(int i = 0; i < 26; i++){
            if(tArr[i] > 0){
                if(sArr[i]/tArr[i] < ans){
                    ans = sArr[i] / tArr[i];   
                }
            }
        }
        
        return ans;   
    }
};