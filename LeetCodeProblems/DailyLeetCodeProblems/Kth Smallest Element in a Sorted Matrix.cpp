class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> res;
        int sz = matrix.size();
        
        for(int i = 0; i < sz; i++){
            for(int j = 0; j < sz; j++){
                res.push_back(matrix[i][j]);
            }
        }
        
        sort(res.begin(), res.end());
        return res[k - 1];
    }
};