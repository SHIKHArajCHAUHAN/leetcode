//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
     void BFS(vector<int> adj[],vector<bool> &vis,int start){
        queue<int> q;
        q.push(start);
        vis[start]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(int it : adj[curr]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
    }
    public:
    int isCircle(int n, vector<string> arr){
        // code here
        vector<int> adj[26],indegree(26,0),outdegree(26,0);
        for(int i=0;i<n;i++){
            string curr=arr[i];
            int m=curr.length();
            adj[(curr[0]-'a')].push_back((curr[m-1]-'a'));
            indegree[(curr[m-1]-'a')]++;
            outdegree[(curr[0]-'a')]++;
        }
        for(int i=0;i<26;i++) if(indegree[i]!=outdegree[i]) return 0;
        int start=arr[0][0]-'a';
        vector<bool> vis(26,0);
        BFS(adj,vis,start);
        for(int i=0;i<26;i++){
            if(adj[i].size()>0){
                if(vis[i]==0) return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<string> A;
        string s;
        
        for(int i = 0;i < N; i++)
        {
            cin>>s;
            A.push_back(s);
        }
        
        Solution ob;
        cout<<ob.isCircle(N, A)<<endl;
    }
    return 0;
}
// } Driver Code Ends