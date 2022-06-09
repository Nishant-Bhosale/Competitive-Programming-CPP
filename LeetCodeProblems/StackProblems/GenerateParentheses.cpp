class Solution {
    vector<string> ans;
public:
    vector<string> generateParenthesis(int n) {
        int len = n * 2;
        solve("", len);
        return ans;
    }
public:
    bool check(string s){
        int diff = 0;
        for(int i = 0; i < s.size(); i++){
            diff += (s[i] == '(' ? 1 : -1);
            if(diff < 0) return false;
        }
        return !diff;
    }
    
public:
    void solve(string s, int n){
        if(s.size() == n){
            if(check(s)) ans.push_back(s);
            return;
        }
        
        solve(s + '(', n);
        solve(s + ')', n);
    }
};