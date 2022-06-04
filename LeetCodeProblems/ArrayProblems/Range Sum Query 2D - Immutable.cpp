class NumMatrix {
public:
        vector<vector<int>> dp;
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.size() == 0 || matrix[0].size() == 0) return;
        dp = vector<vector<int>>(matrix.size(), vector<int>(matrix[0].size() + 1));
        for(int r = 0; r < matrix.size(); r++){
            for(int c = 0; c < matrix[0].size(); c++){
                dp[r][c + 1] = dp[r][c] + matrix[r][c];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int row = row1; row <= row2; row++){
            sum += dp[row][col2 + 1] - dp[row][col1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */