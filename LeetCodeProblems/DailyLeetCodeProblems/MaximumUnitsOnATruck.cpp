class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        
        int ans = 0, box = 0;
        for(auto it : boxTypes){
            if(box + it[0] <= truckSize){
                box += it[0];
                ans += (it[0] * it[1]);
            }
            else{
                ans += (truckSize - box) * it[1];
                break;
            }
        }
        
        return ans;
    }
    
public:
    static bool compare(vector<int>& v1, vector<int>&v2){
        return v1[1] > v2[1];
    }
};