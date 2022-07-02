const int MOD = 1e9 + 7;

class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        hc.push_back(h);
        vc.push_back(w);
        
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());
        
        long long maxW = 0, maxH = 0;
        
        for(int i = 0, prev2 = 0; i < hc.size(); i++){
            maxH = max(maxH, (long long)(hc[i] - prev2));
            prev2 = hc[i];
        }
        
        for(int i = 0, prev1 = 0; i < vc.size(); i++){
            maxW = max(maxW, (long long)(vc[i] - prev1));
            prev1 = vc[i];
        }
        
        return (maxW * maxH) % MOD;
    }
};