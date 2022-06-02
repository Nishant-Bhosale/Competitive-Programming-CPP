class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            set<char> st;
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                if(st.count(board[i][j])) return false;
                st.insert(board[i][j]);
            }
        }
        
        for(int i = 0; i < 9; i++){
            set<char> st;
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.') continue;
                if(st.count(board[j][i])) return false;
                st.insert(board[j][i]);
            }
        }
        
        vector<set<char>> blocks(9);
        
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                if(blocks[(i/3 * 3) + j/3].count(board[i][j])) return false;
                blocks[(i/3)*3 + j/3].insert(board[i][j]);
            }
        }
        
        return true;
    }
};