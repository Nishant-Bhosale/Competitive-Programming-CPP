class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {        
        // if(cost.size() == 2) return min(cost[0], cost[1]);
        
        cost.push_back(0);
        
        for(int i = cost.size() - 2; i >= 0; i--){
            if(i == cost.size() - 2){
                continue;
            }else{
                cost[i] += min(cost[i + 1], cost[i + 2]);
            }
        }
        
        for(int i = 0; i < cost.size(); i++){
            cout<<cost[i]<<endl;
        }
        
        cost.pop_back();
        
        int ans = min(cost[1], cost[0]);
        
        return ans;
    }
};