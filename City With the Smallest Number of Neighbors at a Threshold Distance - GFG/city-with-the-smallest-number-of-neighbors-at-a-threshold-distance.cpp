//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges,
                 int distanceThreshold) {
                      vector<vector<pair<int,int>>>adj(n);
        for(auto i:edges)
        {
            adj[i[0]].push_back({i[1],i[2]});
            adj[i[1]].push_back({i[0],i[2]});
        }
         map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            vector<int>vis(n,0);
            vector<int>dis(n,INT_MAX);
            pq.push({0,i});
            dis[i]=0;
            while(!pq.empty())
            {
                auto node = pq.top();
                pq.pop();
                
                for(auto it:adj[node.second])
                {
                    if(!vis[it.first])
                    {
                        if(dis[it.first]>dis[node.second]+it.second)
                        {
                            dis[it.first]=dis[node.second]+it.second;
                            pq.push({dis[it.first],it.first});
                        }
                    }
                }
                vis[node.second]=1;
            }
            
            for(auto it:dis)
            {
                if(it<=distanceThreshold)
                    mp[i]++;
            }
        }
        int ans=-1,minn=INT_MAX;
        for(auto it:mp)
        {
            minn=min(minn,it.second);
            if(it.second==minn)
                ans=it.first;
        }
        return ans;
                 }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends