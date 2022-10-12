//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    int bfs(int node,vector<int> adj[],int V)
{
    // Code here
    
    vector<int> visited(V,0);
    queue<int> q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
        int node= q.front();
        q.pop();
        for(auto i:adj[node]){
            if(visited[i]==0){
                visited[i]=1;
                q.push(i);
            }
        }
    }
    for(int i=0;i<visited.size();i++){
        if(visited[i]==0){
            return -1;
        }
    }
    return node;
 
}
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	  
      for(int i=0;i<V;i++){
        int ans= bfs(i,adj,V);
        if(ans!=-1){
            return ans;
        }
      }
        return -1;
    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends