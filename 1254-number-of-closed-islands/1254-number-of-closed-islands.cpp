class Solution {
public:
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    void dfs(int i,int j,vector<vector<int>>&grid,int n,int m)
    {
        grid[i][j]=1;
        for(int k=0;k<4;k++)
        {
            int nr=i+dx[k];
            int nc=j+dy[k];
            if(nr>=0&&nc>=0&&nr<n&&nc<m&&grid[nr][nc]==0)
                
            {
                dfs(nr,nc,grid,n,m);
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
      int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(j*i==0||i==n-1||j==m-1)
                {
                    if(grid[i][j]==0)
                        dfs(i,j,grid,n,m);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                    if(grid[i][j]==0)
                    {
                        dfs(i,j,grid,n,m);ans++;
                        }
                
            }
        }
        return ans;
    }
};