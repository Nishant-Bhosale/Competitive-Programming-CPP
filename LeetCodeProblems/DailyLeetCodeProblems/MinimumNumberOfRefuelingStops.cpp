class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        if(target <= startFuel) return 0;
        
        priority_queue<int> pq;
        
        int i = 0, res;
        
        for(res = 0; startFuel < target; res++){
            while(i < stations.size() && stations[i][0] <= startFuel){
                pq.push(stations[i++][1]);
            }    
            
            if(pq.empty()) return -1;
            startFuel += pq.top(), pq.pop();
        }
        
        return res;
    }
};