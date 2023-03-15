class Solution {
public:int maxx=0;
    int dx[4]={0,0,+1,-1};
    int dy[4]={+1,-1,0,0};
    void dfs(int x,int y,vector<vector<int>>&grid,int &cnt)
    {
        grid[x][y]=0;
        cnt++;
        int n=grid.size();
        int m=grid[0].size();
        for(int k=0;k<4;k++)
        {
            int nx = x+dx[k], ny = y+dy[k];
           if(nx>=0&&nx<n&&ny>=0&&ny<m&&grid[nx][ny]==1)
           {
               dfs(nx,ny,grid,cnt);
           }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    int cnt = 0;
                    dfs(i,j,grid,cnt);
                maxx=max(maxx,cnt);
                }
            }
        }
        return maxx;
    }
};