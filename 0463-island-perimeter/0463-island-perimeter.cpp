class Solution {
public:
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    void dfs(int x,int y,vector<vector<int>>&vis,vector<vector<int>>& grid,int &cnt)
    {
        if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size() || grid[x][y]==0)
        {
            cnt++;
            return;
        }
        if(vis[x][y]) return;
        // vis[x][y] = 1;
        // dfs(x+1, y, vis, grid, cnt);
        // dfs(x-1, y, vis, grid, cnt);
        // dfs(x, y+1, vis, grid, cnt);
        // dfs(x, y-1, vis, grid, cnt);

        vis[x][y]=1;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            dfs(nx,ny,vis,grid,cnt);
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
               if(vis[i][j]==0&&grid[i][j]==1)
               {
                   int cnt=0;
                   dfs(i,j,vis,grid,cnt);
                   return cnt;
               }
            }
        }
        return 0;
    }
};