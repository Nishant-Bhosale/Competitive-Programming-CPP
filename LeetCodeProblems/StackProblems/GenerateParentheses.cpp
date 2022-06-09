// class Solution {
//     vector<string> ans;
// public:
//     vector<string> generateParenthesis(int n) {
//         int len = n * 2;
//         solve("", len);
//         return ans;
//     }
// public:
//     bool check(string s){
//         int diff = 0;
//         for(int i = 0; i < s.size(); i++){
//             diff += (s[i] == '(' ? 1 : -1);
//             if(diff < 0) return false;
//         }
//         return !diff;
//     }
    
// public:
//     void solve(string s, int n){
//         if(s.size() == n){
//             if(check(s)) ans.push_back(s);
//             return;
//         }
        
//         solve(s + '(', n);
//         solve(s + ')', n);
//     }
// };

//Optimized Solution

class Solution {
    vector<string> ans;
public:
    vector<string> generateParenthesis(int n) {
        int len = n;
        solve(0, 0, "", len);
        return ans;
    }
public:
    void solve(int open, int close, string s, int n){
        if(s.size() == n * 2){
            ans.push_back(move(s));
            return;
        }
        
        if(open < n){
            solve(open + 1, close, s + '(', n);        
        }
        if(close < open){
            solve(open, close + 1, s + ')', n);        
        }
    }
};