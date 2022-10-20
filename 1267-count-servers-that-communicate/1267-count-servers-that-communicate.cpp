class Solution {
public:
   /* void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid)
    {
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr=row+delr[i];
                int nc=col+delc[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==0&&grid[nr][nc]==1)
                {
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
    }*/
    int countServers(vector<vector<int>>& grid) {
       int n=grid.size();
        int m=grid[0].size();
       /* vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<m;j++)
            {
               if(!vis[i][j]&&grid[i][j]==1)
               {
                   cnt++;
                   bfs(i,j,vis,grid);
               }
            }
        }
        return cnt;*/
        int cnt=0;
        vector<int>r(n,0);
        vector<int>c(m,0);
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<m;j++)
            {
               if(grid[i][j]){
               r[i]++;
               c[j]++;
               }
               
           }
        }
      //   int cnt=0;
                  
    for(int i=0;i<n;i++)
        {
           for(int j=0;j<m;j++)
            {
              if(grid[i][j])
              {
                 if(r[i]-1||c[j]-1) cnt++ ;//dono m se koe ek v zero na ho to use consider nh krna hai
              }
           }
        }
               
    return cnt;
        
    }
};