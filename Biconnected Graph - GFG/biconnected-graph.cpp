//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   
    bool solve(int i,vector<int> & vis,vector<int> adj[],int n)
    {
        queue<int> q;
        if(i==0)
        {
            q.push(1);
            vis[1]=1;
        }
        else
        {
            q.push(0);
            vis[0]=1;
        }
        int num=1;
        while(q.empty()==false)
        {
            int n=q.front();
            q.pop();
            for(auto it:adj[n])
            {
                if(vis[it]==0 && it!=i)
                {
                    num++;
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        
        return num==(n-1);
    }
    int biGraph(int arr[], int n, int e) {
        // code here
        if(n==1) return 1;
         if(n==2&&e==1)
            return true;
      vector<int> adj[n];
        for(int i=0;i<e*2;i+=2)
        {
            adj[arr[i]].push_back(arr[i+1]);
            adj[arr[i+1]].push_back(arr[i]);
        }
           int cnt=0;
        for(int i=0;i<n;i++)
        {
            vector<int> vis(n);
            if(solve(i,vis,adj,n))
              cnt++;  
        }
        return cnt==n;


    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        cin>>n>>e;
        
        int arr[2*e];
        for(int i=0; i<2*e; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.biGraph(arr,n,e) << endl;
    }
    return 0;
}
// } Driver Code Ends