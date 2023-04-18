//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void dfs(int i,vector<bool>&vis,int range)
    {
        for(int k=i-range;k<=(i+range);k++)
        {
            if(k>=0&&k<vis.size())
            vis[k]=true;
        }
    }
    bool wifiRange(int N, string S, int X){
        // code here
    //   vector<bool>vis(N,false);
    //   for(int i=0;i<N;i++)
    //   {
    //       if(S[i]=='1'&&vis[i]==false)
    //       {
    //           dfs(i,vis,X);
    //       }
    //   }
    //   for(int i=0;i<N;i++)
    //   {
    //       if(vis[i]==false)return false;
    //   }
    //   return true;
    // 
    int cnt=0;
        for(int i=0; i<N; i++){
            if(S[i] == '1'){
                if(X >= abs(cnt)) cnt = X;
                else return 0;
            }
            else
            {
                cnt--;
            }
        }
        if(cnt<0) return 0;
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends