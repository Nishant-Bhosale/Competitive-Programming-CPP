class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        for(int i = 1; i < 10; i++){
            solve(i, k, n, ans);            
        }
        return ans;
    }
public:
    void solve(int num, int diff, int n, vector<int>& ans){
        if(n == 1) {
            ans.push_back(num);
            return;
        }
        if(num % 10 - diff >= 0){
            solve(num * 10 + (num % 10 - diff), diff, n - 1, ans);
        }
        if(diff){
            if(num % 10 + diff <= 9){
                solve(num * 10 + (num % 10 + diff), diff, n - 1, ans);
            }
        }
    }
};