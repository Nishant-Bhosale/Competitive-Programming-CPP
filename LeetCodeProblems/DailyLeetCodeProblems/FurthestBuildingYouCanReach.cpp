class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        int i;
        priority_queue<int> pq;
        for(i = 0; i < heights.size() - 1; i++){
            int diff = heights[i + 1] - heights[i];
            if(heights[i + 1] <= heights[i]){
                continue;
            }else if(bricks && bricks >= diff){
                bricks -= diff;
                pq.push(diff);
            }else if(ladders){
                if(pq.size()){
                    int cntBricks = pq.top();
                    if(cntBricks > diff){
                        bricks += cntBricks;
                        pq.pop();
                        pq.push(diff);
                        bricks -= diff;
                    }
                }
                ladders--;
            }
            else{
                break;
            }
        }
        
        return i;
    }
};