class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int maxVal = *max_element(piles.begin(), piles.end());
        
        int ans = INT_MAX;
        // for(int i = 1; i <= maxVal; i++){
        //     int totalNums = 0, f = 0;
        //     for(int j = 0; j < piles.size(); j++){
        //         if(piles[j] <= i){
        //             totalNums++;
        //         }else{
        //             totalNums += ceil((double)(piles[j]*1.0 / i*1.0));
        //         }
        //         if(totalNums > h){
        //             f = 1;
        //             break;
        //         }
        //     }
        //     if(f != 1) ans = min(i, ans);
        // }
        
        int left = 1, right = maxVal;
        
        while(left <= right){
            int k = (left + right) / 2;
            long long hrs = 0;
            for(int i = 0; i < piles.size(); i++){
                hrs += piles[i] / k + (piles[i] % k != 0);
            }
            
            if(hrs <= h){
                ans = min(ans, k);
                right = k - 1;
            }else{
                left = k + 1;
            };
        }
        return ans;
    }
};