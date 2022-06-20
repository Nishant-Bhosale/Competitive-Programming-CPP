class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> st(words.begin(), words.end());
        
        for(auto s : st){
            for(int i = 1; i < s.size(); i++){
                st.erase(s.substr(i));
            }
        }
        
        int ans = 0;
        for(auto w : st){
            ans += w.size() + 1;
        }
        
        return ans;
    }
};