//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int isEularCircuit(int V, vector<int>adj[]){
	    // Code here
	         
        vector<int> degree(V, 0);
        
        for(int i = 0; i<V; i++){
            degree[i] = adj[i].size();
        }
        
        int evenDegNode = 0;
        int oddDegNode = 0;
        
        for(int i = 0; i<V; i++){
            if(degree[i] % 2 == 0){
                evenDegNode++;
            }
            
            else{
                oddDegNode++;
            }
        }
        
        if(evenDegNode == V)
          return 2;
          
        if(oddDegNode == 2)
          return 1;
          
        return 0;  
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
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.isEularCircuit(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends