class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        
        for(int i = 0; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            
            if(prices[i] - minPrice > maxProfit){
                maxProfit = max(prices[i] - minPrice, max(0, maxProfit));
            }
        }
  
        return maxProfit;
    }
};