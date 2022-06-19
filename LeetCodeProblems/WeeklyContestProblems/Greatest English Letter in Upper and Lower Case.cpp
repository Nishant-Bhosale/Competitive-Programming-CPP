class Solution {
public:
    string greatestLetter(string s) {
        vector<int> small(26, 0);
        vector<int> big(26, 0);
        
        for(int i = 0; i < s.size(); i++){
            if(islower(s[i])){
                small[s[i] - 'a'] = 1;
            }  
            if(isupper(s[i])){
                big[s[i] - 'A'] = 1;
            }
        }
        
        for(int i = big.size() - 1; i >= 0; i--){
            if(big[i] && small[i]){
                return string(1, 'A' + i);
            }
        }
        
        return "";
    }
};