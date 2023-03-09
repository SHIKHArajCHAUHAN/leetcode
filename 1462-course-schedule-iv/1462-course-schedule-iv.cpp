class Solution {
public:
    void dfs(vector<int>adj[],int node,vector<bool>&vis)
    {
        vis[node]=1;
        for(auto i:adj[node])
        {
            if(vis[i]==0)
            {
                
                dfs(adj,i,vis);
            }
           
        }
    
    }
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<bool>v;
        
        vector<int>adj[numCourses];
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for(int i=0;i<n;i++)
        {
            vector<bool>vis(numCourses,0);
            int node=queries[i][0];
           dfs(adj,node,vis);
            v.push_back(vis[queries[i][1]]);
        }
        return v;
    }
};