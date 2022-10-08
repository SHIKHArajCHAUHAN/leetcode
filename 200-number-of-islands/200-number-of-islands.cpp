class Solution {
public:
    void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>&grid)
    {
               int n = grid.size();
        int m = grid[0].size();
        vector<int> delRow = {-1, 0, +1, 0};
        vector<int> delCol = {0, +1, 0, -1};
       vis[row][col]=1;
        queue<pair<int, int>> q;
      q.push({row,col});
       
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++)
            {
                int r = row + delRow[i];
                int c = col + delCol[i];
                if(r >= 0 && r < n && c >= 0 && c < m && !vis[r][c] && grid[r][c] == '1')
                {
                    q.push({r, c});
                    vis[r][c] = 1;
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
          int n = grid.size();
        int m = grid[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int r=0;r<n;r++)
        {
            for(int c=0;c<m;c++)
            {
                if(!vis[r][c]&&grid[r][c]=='1')
                {cnt++;
                 bfs(r,c,vis,grid);
                }
            }
        }
        return cnt;
    }
};