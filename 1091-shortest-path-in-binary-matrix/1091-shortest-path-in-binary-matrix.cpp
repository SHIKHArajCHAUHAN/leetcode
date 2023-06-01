class Solution {
public:
    int dx[8]={-1,-1,0,1,1,1,0,-1};
    int dy[8]={0,1,1,1,0,-1,-1,-1};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>vis(n,vector<int>(n,0));
        if(grid[0][0]==1||grid[n-1][n-1]==1) return -1;
         queue<pair<int,pair<int,int>>>q;
        q.push({1,{0,0}});
        vis[0][0]=1;
      
        while(!q.empty())
        {
            auto now=q.front();q.pop();
            int dist=now.first;
            int x=now.second.first;
            int y=now.second.second;
            if(x==n-1&&y==n-1)return dist;
            for(int i=0;i<8;i++)
            {
                int nr=dx[i]+x;
                int nc=dy[i]+y;
                if(nr>=0&&nr<n&&nc<n&&nc>=0&&grid[nr][nc]==0&&vis[nr][nc]==0)
                {
                    vis[nr][nc]=1;
                    q.push({dist+1,{nr,nc}});
                }
            }
        }
        return -1;
    }
};