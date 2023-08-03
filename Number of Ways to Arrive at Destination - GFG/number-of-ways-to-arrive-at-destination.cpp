//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& roads) {
        // code here
           vector<pair<int,int>> adj[n];
        for(auto it:roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        vector<long> dist(n,1e18),ways(n,0);
        int mod=1e9+7;
        priority_queue<pair<long,long>,vector<pair<long,long>>,greater<pair<long,long>>> pq;
        pq.push({0,0});
        dist[0]=0;
        ways[0]=1;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int node=it.second;
            long dis=it.first;
            for(auto it:adj[node]){
                int adjnode=it.first;
                long edw=it.second;
                if(dis+edw<dist[adjnode]){
                    ways[adjnode]=ways[node]%mod;
                    dist[adjnode]=dis+edw;
                    pq.push({dist[adjnode],adjnode});
                }
                else if(dis+edw==dist[adjnode]){
                    ways[adjnode]=(ways[node]+ways[adjnode])%mod;
                }
            }
        }
        return ways[n-1]%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends