class Solution {
public:
    void dfs(int node,int parent,vector<int>adj[],vector<int>&vis,vector<vector<int>>&ans)
    {
      vis[node]=1;
        for(auto i:adj[node])
        {
            
           if(vis[i]==0)
           {
               ans[i].push_back(parent);
               dfs(i,parent,adj,vis,ans);
           }
            
        }
    
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
       vector<int>adj[n];
        vector<vector<int>>ans(n);
        for(auto i:edges)
        {
             adj[i[0]].push_back(i[1]);
        }
       
        for(int i=0;i<n;i++)
        {
             vector<int>vis(n,0);
            dfs(i,i,adj,vis,ans);
        }
        return ans;
    }
};