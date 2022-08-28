class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row = mat.size(), col = mat[0].size();

        for(int i = 0; i < col + row; i++){
            vector<int> temp;
            
            int pi = i < row ? i : 0, pj = max(0, i - row + 1);
            for(int j = pi, k = pj; j < row && k < col; j++, k++){
                temp.push_back(mat[j][k]);
            }
            
            sort(temp.begin(), temp.end());
            
            for(int j = pi, idx = 0, k = pj; j < row && k < col; j++,idx++,k++){
                mat[j][k] = temp[idx];
            }
        }
        
        return mat;
    }
};