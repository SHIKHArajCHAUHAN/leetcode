//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  /* void bfs(int r,int c,vector<vector<int>>&vis,vector<vector<int>>&grid)
  {
      vis[r][c]=1;
      queue<pair<int,int>>q;
      q.push({r,c});
      int n=grid.size(),m=grid[0].size();
      while(!q.empty())
      {
          auto r=q.front().first;
          auto c=q.front().second;
          q.pop();
          for(int drow=-1;drow<=1;drow++)
          {
              for(int dcol=-1;dcol<=1;dcol++)
              {
                  int nr=r+drow;
                  int nc=c+dcol;
                 if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1&&vis[nr][nc]==0)
                 {
                     vis[nr][nc]=1;
                     q.push({nr,nc});
                 }
              }
          }
      }
  }
    // Function to find the number of islands.
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int r=0;r<n;r++)
        {
            for(int c=0;c<m;c++)
            {
                if(vis[r][c]==0&&grid[r][c]==1)
                {
                    count++;
                    bfs(r,c,vis,grid);
                }
            }
        }
        return count;*/
         void dfs(vector<vector<int>>& grid, vector<vector<int>>& vist, int row, int col, 
    vector<pair<int, int>> &v, int row0, int col0)
    {
        int n = grid.size();
        int m = grid[0].size();
        vist[row][col] = 1;
        v.push_back({row-row0, col-col0});
        vector<int> delRow = {-1, 0, +1, 0}; 
        vector<int> delCol = {0, +1, 0, -1};
        for(int i = 0; i < 4; i++)
        {
            int r = row + delRow[i];
            int c = col + delCol[i];
            if(r >= 0 && r < n && c >= 0 && c < m && !vist[r][c] && grid[r][c] == 1)
                dfs(grid, vist, r, c, v, row0, col0);
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
       int n = grid.size();
       int m = grid[0].size();
       vector<vector<int>> vist(n, vector<int>(m, 0));
       set<vector<pair<int, int>>> s;
       for(int i = 0; i < n; i++)
       {
           for(int j = 0; j < m; j++)
           {
               if(!vist[i][j] && grid[i][j] == 1)
               {
                   vector<pair<int, int>> v;
                   dfs(grid, vist, i, j, v, i, j);
                   s.insert(v);
               }
           }
       }
       return s.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends