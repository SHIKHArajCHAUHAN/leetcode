//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int countOfNodes(vector<int> graph[], int n)
    {
        // code here
        int vis[n+1]={0};
       int depth[n+1]={0};
       queue<pair<int,int>>q;
       q.push({0,1});
       vis[1]=1;
       while(q.empty()==false){
           int dist=q.front().first;
           int node=q.front().second;
           q.pop();
           depth[dist]++;
           for(auto it:graph[node]){

               if(vis[it]==0){

                   vis[it]=1;

                   q.push({dist+1,it});

               }

           }

       }

       int even=0;

       int odd=0;

       for(int i=0;i<n;i++){

           if(i%2==0){

               even+=depth[i];

           }

           else{

               odd+=depth[i];

           }

       }

       return ((((even)*(even-1))/2)+(((odd)*(odd-1))/2));
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>graph[n+1];
        for(int i=0;i<n-1;i++){
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        Solution ob;
        cout<<ob.countOfNodes(graph, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends