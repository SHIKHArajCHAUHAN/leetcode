class Solution {
public:
    vector<int> drow{0,-1,0,1};
        vector<int> dcol{-1,0,1,0};
        
    typedef pair<int,pair<int,int>> pi;
    
    int swimInWater(vector<vector<int>>& grid) {
        
        int n = grid.size();
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        vector<vector<int>> dist(n, vector<int> (n, 1e9));
        vector<vector<int>> vis(n, vector<int> (n, -1));
        
        for(int i=0;i<n;i++)    {
            for(int j=0;j<n;j++)    {
                dist[i][j] = grid[i][j];
            }
        }
        
        dist[0][0] = grid[0][0];
        pq.push({grid[0][0], {0,0}});
        
        while(!pq.empty())  {
            auto it = pq.top();
            pq.pop();
            int wt = it.first;
            int r = it.second.first;
            int c = it.second.second;
            
            for(int k=0; k<4; k++)  {
                int dr = r+drow[k];
                int dc = c+dcol[k];
                
                if(dr>=0&&dr<n&&dc>=0&&dc<n&&vis[dr][dc]==-1)    {
                    if(wt>=grid[dr][dc]) {
                        pq.push({wt, {dr,dc}});
                        dist[dr][dc] = wt;
                        vis[dr][dc] = 1;
                    }
                    else if(wt<grid[dr][dc]) {
                        pq.push({grid[dr][dc], {dr,dc}});
                        dist[dr][dc] = grid[dr][dc];
                        vis[dr][dc] = 1;
                    }
                }
            }
        }
             
        return dist[n-1][n-1];
    }  
};