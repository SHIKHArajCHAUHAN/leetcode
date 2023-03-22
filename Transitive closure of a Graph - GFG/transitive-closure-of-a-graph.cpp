//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
    void dfs(int parent, int node, vector<vector<int>> &graph, vector<int> adj[], vector<int> &vis)
    {
        graph[parent][node] = 1;
        vis[node] = 1;
        for (auto x : adj[node])
        {
            if (!vis[x])
                dfs(parent, x, graph, adj, vis);
        }
    }
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
       // vector<vector<int>>vis(N,vector<int>(N,0));
        vector<int>adj[N];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(graph[i][j]==1&&i!=j)
                adj[i].push_back(j);
            }
        }
        for(int i=0;i<N;i++)
        {
            vector<int>vis(N,0);
            dfs(i,i,graph,adj,vis);
        }
       return graph;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends