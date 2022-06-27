class Solution {
public:
    int minPartitions(string n) {
        int maxNum = INT_MIN;
        
        for(int i = 0; i < n.size(); i++){
            maxNum = max(maxNum, (int)(n[i] - '0'));
        }
        
        return maxNum;
    }
};