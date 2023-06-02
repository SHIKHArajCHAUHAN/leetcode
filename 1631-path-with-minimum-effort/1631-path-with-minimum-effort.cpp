class Solution {
public:
    int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size(),m=heights[0].size();
       vector<vector<int>>dist(n,vector<int>(m,1e9));
        
        priority_queue<pair<int , pair<int,int>> , vector<pair<int , pair<int,int>>> , greater<pair<int , pair<int,int>>>>pq;
        pq.push({0,{0,0}});
        while(!pq.empty())
        {
            auto i=pq.top();pq.pop();
            int diff=i.first;
            int r=i.second.first;
            int c=i.second.second;
            if(r==n-1&&c==m-1) return diff;
            for(int i=0;i<4;i++)
            {
                int nr=r+dx[i];
                int nc=c+dy[i];
                if(nr<n&&nr>=0&nc<m&&nc>=0)
                {
                    int neweffort=max(abs(heights[r][c]-heights[nr][nc]),diff);
                    if(neweffort<dist[nr][nc])
                    {
                        dist[nr][nc]=neweffort;
                        pq.push({neweffort,{nr,nc}});
                    }
                }
            }
            
        }
        return 0;
    }
};