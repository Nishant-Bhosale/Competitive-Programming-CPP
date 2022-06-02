class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rowLen = matrix[0].size();
        int matrixLen = matrix.size();
        vector<vector<int>> ans(rowLen, vector<int> (matrixLen, 0));
        for(int i = 0; i < matrixLen; i++){
            for(int j = 0; j < rowLen; j++){
                    ans[j][i] = matrix[i][j];
            }
        }
        
        return ans;
    }
};