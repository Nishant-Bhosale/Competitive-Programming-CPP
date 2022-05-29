zclass Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans = 0, n = words.size();
        vector<bitset<26>> chars(n);
        
        for(int i = 0; i < n; i++){
            for(auto ch : words[i]){
                chars[i][ch - 'a'] = 1;
            }
            for(int j = 0; j < i; j++){
                if(checkCommon(chars[i], chars[j])){
                    if(words[i].size()*words[j].size() > ans){
                        ans = int(size(words[i])*size(words[j]));
                    }
                }
            }
        }
        return ans;
    }

public:
    bool checkCommon(bitset<26>& a, bitset<26>& b){
        for(int i = 0; i < 26; i++){
            if(a[i] && b[i]) return false;
        }
        return true;
    }
};