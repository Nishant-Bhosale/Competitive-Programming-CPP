class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                ans = max(ans, area(grid, i, j));
            }
        }
        return ans;
    }

public:
    int area(vector<vector<int>>& grid, int r, int c){
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || !grid[r][c]){
            return 0;
        }
        grid[r][c] = 0;
        return 1 + area(grid, r + 1, c) + area(grid, r - 1, c) + area(grid, r, c + 1) + 
        area(grid, r, c - 1);
    }
};