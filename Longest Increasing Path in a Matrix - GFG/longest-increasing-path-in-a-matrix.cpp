//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int rN[4]={-1,0,1,0};
        int cN[4]={0,1,0,-1};
   int dfs(int row,int n,int col,int m,vector<vector<int>>&matrix,  vector<vector<int>>&dp)
  
  {
      if(dp[row][col]!=-1)
      return dp[row][col];
      int sum=1;
      for(int i=0;i<4;i++)
      {
          int rV=row+rN[i];
          int cV=col+cN[i];
          if(rV>=0 && rV<n && cV>=0 && cV<m && 
          matrix[row][col]<matrix[rV][cV])
          sum=max(sum,1+dfs(rV,n,cV,m,matrix,dp));
      }
      return dp[row][col]=sum;
  }
    int longestIncreasingPath(vector<vector<int>>& matrix, int n, int m) {
        // Code here
        vector<vector<int>>dp(n+1,vector<int>(m,-1));
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,dfs(i,n,j,m,matrix,dp));
            }
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
        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        cout << obj.longestIncreasingPath(matrix, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends