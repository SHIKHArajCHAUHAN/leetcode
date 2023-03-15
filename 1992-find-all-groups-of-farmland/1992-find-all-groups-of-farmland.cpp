class Solution {
public:
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
     void dfs(int i,int j,int &x,int &y,vector<vector<int>>&land)
     {  int n=land.size();
         int m=land[0].size();
         if(i<0||j<0||i>=n||j>=m||land[i][j]==0)return ;
         x=max(i,x);
         y=max(j,y);
      land[i][j]=0;
         for(int k=0;k<4;k++)
         {
          int nx=i+dx[k];
           int ny=j+dy[k];
            // if(nx>=0&&ny>=0&&nx<n&&ny<m&&land[nx][ny])
            dfs(nx,ny,x,y,land);
         }
         
     }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
      vector<vector<int>>v;
        int n=land.size();
        int m=land[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(land[i][j]==1){
                     int x=i,y=j;
                dfs(i,j,x,y,land);
                v.push_back({i,j,x,y});
                }
            }
        }
        return v;
    }
};