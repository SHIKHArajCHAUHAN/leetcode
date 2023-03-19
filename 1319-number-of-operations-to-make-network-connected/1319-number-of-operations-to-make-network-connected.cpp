class Solution {
public:
    int cnt=0;
    void dfs(int node,vector<int>&vis,vector<int>adj[])
    {
        
        if(vis[node])return;
        vis[node]=1;
        for(auto i:adj[node])
        {
            if(vis[i]==0)
            {
                dfs(i,vis,adj);

            }
            
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int>vis(n,0);
        vector<int>adj[n];
        if(connections.size()<n-1)return -1;
        for(auto i:connections)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        for(int i=0;i<n;i++)
        {
          if(vis[i]==0){
               dfs(i,vis,adj);
              cnt++;}
        }
       return cnt-1;
    }
};