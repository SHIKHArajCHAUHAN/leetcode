//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int minimumCost(vector<vector<int>>& flights, int n, int k) {
        // code here
         vector<pair<int, int>> adj[n+1];
        for(auto i: flights){
            pair<int, int> pr = {i[1], i[2]};
            adj[i[0]].push_back(pr);
            
        }
        
        vector<int> dis(n+1, INT_MAX);
        dis[k] = 0;
        queue<int> q;
        q.push(k);
        
        while(!q.empty()){
            
            int now = q.front();
            q.pop();
            
            for(auto i: adj[now]){
                
                if(dis[i.first] > i.second + dis[now]){
                    dis[i.first] = i.second + dis[now];
                    q.push(i.first);
                }
            }
        }
        int ans = *max_element(dis.begin()+1, dis.end());
        if(ans == INT_MAX) return -1;
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int size;
        cin >> size;
        vector<vector<int>> flights(size,vector<int>(3));
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flights[i]=temp;
        }

        Solution ob;
        cout << ob.minimumCost(flights, n, k) << "\n";
    }
}

// } Driver Code Ends