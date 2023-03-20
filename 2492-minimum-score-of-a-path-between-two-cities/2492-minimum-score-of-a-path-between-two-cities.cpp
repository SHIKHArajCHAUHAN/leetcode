class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
    vector<pair<int,int>>adj[n+1];
        for(int i=0;i<roads.size();i++)
        {
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        int minn=INT_MAX;
         queue<pair<int,int>>q;
            q.push({1,minn});
        vector<int>vis(n+1,0);
      
            while(!q.empty())
            {
                int n=q.size();
                for(int i=0;i<n;i++){
                auto now=q.front();q.pop();
                for(auto [node,wt]:adj[now.first])
                {
                    minn=min(minn,wt);
                    if(!vis[node]){
                    q.push({node,wt});
                        vis[node]=1;
                        
                         }
                }
                
            }
        }
              return minn;
    }
};