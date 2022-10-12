class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        vector<vector<int>>dist(n,vector<int>(m,0));
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        queue<pair<int,pair<int,int>>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    vis[i][j]=true;
                    q.push({0,{i,j}});
                }
            }
        }
        while(!q.empty())
        {
        int r=q.front().second.first;
            int c=q.front().second.second;
            int dis=q.front().first;
            q.pop();
            dist[r][c]=dis;
        for(int i=0;i<4;i++)
        {
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0&& nr<n&& nc>= 0&& nc<m && vis[nr][nc]==false)
            { q.push({dis+1,{nr,nc}});
             vis[nr][nc]=true;
            }
        }
        }
            return dist;
    }
};