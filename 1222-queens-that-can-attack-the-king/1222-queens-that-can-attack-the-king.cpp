class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
      vector<vector<int>>ans;
        vector<vector<int>> board(8, vector<int>(8, 0));
        for (vector<int>& queen : queens) {
            board[queen[0]][queen[1]] = 1;
        }
        int x = king[0], y = king[1];
        for (int i = x - 1; i >= 0; i--) {//up
            if (board[i][y]) {
                ans.push_back({i, y});
                break;
            }
        }
        for (int i = x + 1; i < 8; i++) {//down
            if (board[i][y]) {
                ans.push_back({i, y});
                break;
            }
        }
        for (int j = y - 1; j >= 0; j--) {//left
            if (board[x][j]) {
                ans.push_back({x, j});
                break;
            }
        }//right
        for (int j = y + 1; j < 8; j++) {
            if (board[x][j]) {
                ans.push_back({x, j});
                break;
            }
        }
        for (int i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--) {//diagonals up
            if (board[i][j]) {
                ans.push_back({i, j});
                break;
            }
        }
        for (int i = x + 1, j = y + 1; i < 8 && j < 8; i++, j++) {//diagonal main down
            if (board[i][j]) {
                ans.push_back({i, j});
                break;
            }
        }
        for (int i = x - 1, j = y + 1; i >= 0 && j < 8; i--, j++) {//dia 
            if (board[i][j]) {
                ans.push_back({i, j});
                break;
            }
        }
        for (int i = x + 1, j = y - 1; i < 8 && j >= 0; i++, j--) {//dia 
            if (board[i][j]) {
                ans.push_back({i, j});
                break;
            }
        }
        return ans;
    }
};