class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int score = 0;
        int n = cp.size();
        vector<int> pre(n + 1, 0);
        vector<int> suf(n + 1, 0);
        
        // pre[0] = cp[0];
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += cp[i];
            pre[i + 1] = sum;
        }
        
        sum = 0;
        for(int i = n - 1; i >= 0; i--){
            sum += cp[i];
            suf[i] = sum;
            // suf[i] = suf[i + 1] + cp[i];
        }
        
        reverse(suf.begin(), suf.end());
        
        for(int i = 0; i <= k; i++){
            score = max(score, pre[i] + suf[k - i]);
        }
        
        return score;
    }
};