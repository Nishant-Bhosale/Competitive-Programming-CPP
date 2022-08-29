class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    recur(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
public:
    void recur(vector<vector<char>>& grid, int i, int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()){
            return;
        }
        
        if(grid[i][j] == '0' || grid[i][j] == '2') return;
        
        grid[i][j] = '2';
        
        recur(grid, i + 1, j);
        recur(grid, i, j + 1);
        recur(grid, i - 1, j);
        recur(grid, i, j - 1);
    }
};