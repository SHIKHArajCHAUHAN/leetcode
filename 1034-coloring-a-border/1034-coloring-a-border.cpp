class Solution {
public:
    int dx[4]={-1,0,+1,0};
    int dy[4]={0,1,0,-1};
    void dfs(int x,int y,vector<vector<int>>&grid,int &color,vector<vector<int>>&vis,int initialcolor)
    {int cnt=0;
        int n=grid.size();
        int m=grid[0].size(); 
        
       if( vis[x][y]==0) 
       {vis[x][y]=1;
        grid[x][y]=color;
       }
        for(int i=0;i<4;i++)
        {
           int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0&&ny>=0&&nx<n&&ny<m)
            {
                {
                 if(vis[nx][ny]==0&&grid[nx][ny]==initialcolor) 
                     
                  
                dfs(nx,ny,grid,color,vis,initialcolor);
                    if(vis[nx][ny])
                    {
                        cnt++;
                    }
                }
            }
            if(cnt==4) grid[x][y]=initialcolor;
        }   
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        int initialcolor=grid[row][col];
       dfs(row,col,grid,color,vis,initialcolor);
        return grid;
    }
};
//[[1,1,1],[1,1,1],[1,1,1]] row=1;col=1 color=2; y fail ho rha baki sbb shi q
/*
[[1,1],[1,2]]
0
0
3
[[1,2,2],[2,3,2]]
0
1
3
[[1,1,1],[1,1,1],[1,1,1]]
1
1
2*/
///////////////////my output
/*
[[3,3],[3,2]]
[[1,3,3],[2,3,3]]
[[2,2,2],[2,2,2],[2,2,2]]*/
///////////////////expected output
/*
[[3,3],[3,2]]
[[1,3,3],[2,3,3]]
[[2,2,2],[2,1,2],[2,2,2]]
*/
