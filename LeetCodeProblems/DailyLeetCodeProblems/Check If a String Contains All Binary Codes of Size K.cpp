class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k > s.size()) return false;
        int need = 1 << k;
        unordered_set<string> mySet;
        
        for(int i = 0; i <= s.size() - k; i++){
            string a = s.substr(i, k);
            mySet.insert(a);
        }
        
        return mySet.size() == pow(2, k);
    }
};