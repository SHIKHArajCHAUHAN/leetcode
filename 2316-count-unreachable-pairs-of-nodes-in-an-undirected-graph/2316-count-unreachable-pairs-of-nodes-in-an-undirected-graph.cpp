class Solution {
public:
    void dfs(int &ans,int i,vector<int>adj[],vector<int>&vis)
    {
        vis[i]=1;
        ans++;
        for(auto it:adj[i])
        {
            if(vis[it]==0)
            {
                dfs(ans,it,adj,vis);
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int>vis(n,0);
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                int ans=0;
                dfs(ans,i,adj,vis);
                res.push_back(ans);
                    
            }
        }
        long long ans=0;
        for(int i=0;i<res.size();i++)
        {
          
             ans+=(long long)(res[i])*(long long)(n-res[i]); 
          
        }
        return ans/2;
    }
};