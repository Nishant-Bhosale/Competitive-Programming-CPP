
class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<int>> visited(m.size(), vector<int>(m[0].size()));
        if(m[0][0] == 1){
            getAllPossiblePaths(0, 0, "", ans, m, visited);
        }
        return ans;
    }
    public:
    void getAllPossiblePaths(int i, int j, string s, vector<string>& ans, vector<vector<int>>& m, vector<vector<int>>& visited){
        if(i == m.size() - 1 && i == j){
            ans.push_back(s);    
        }
    
        if(i + 1 < m.size() && !visited[i + 1][j] && m[i + 1][j]){
            visited[i][j] = 1;
            getAllPossiblePaths(i + 1, j, s + 'D', ans, m, visited);
            visited[i][j] = 0;
        }
      
        if(j - 1 >= 0 && !visited[i][j - 1] && m[i][j - 1] == 1){
            visited[i][j] = 1;
            getAllPossiblePaths(i, j - 1, s + 'L', ans, m, visited);
            visited[i][j] = 0;
        }
        
        if(j + 1 < m.size() && !visited[i][j + 1] && m[i][j + 1] == 1){
            visited[i][j] = 1;
            getAllPossiblePaths(i, j + 1, s + 'R', ans, m, visited);
            visited[i][j] = 0;
        }
        
        if(i - 1 >= 0 && !visited[i - 1][j] && m[i - 1][j] == 1){
            visited[i][j] = 1;
            getAllPossiblePaths(i - 1, j, s + 'U', ans, m, visited);
            visited[i][j] = 0;
        }
    }
};