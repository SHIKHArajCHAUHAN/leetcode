class Solution {
public:
  void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &nodes)
    {
        vis[node] = 1;
        nodes.push_back(node);
        for(auto a : adj[node])
        {
            if(!vis[a]) dfs(a, adj, vis, nodes);
        }
    }
    
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(int i=0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int> vis(n, 0);
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                vector<int> nodes;
                dfs(i, adj, vis, nodes);
                int f=0;
                for(int j=0;j<nodes.size();j++)
                {
                    if(adj[nodes[j]].size() != nodes.size()-1)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0) ans++;
            }
        }
        
        return ans; 
    }
};