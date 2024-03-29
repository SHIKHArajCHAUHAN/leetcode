//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int fn(string a,string b)
  {
      int n=a.length();
      int v[n+1][n+1];
      for(int i=0;i<n+1;i++)
      {
          for(int j=0;j<n+1;j++)
          {
              if(i==0||j==0)
              {
                  v[i][j]=0;
              }
          }
      }
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=n;j++)
          {
              if(a[i-1]==b[j-1])
              {
                  v[i][j]=1+v[i-1][j-1];
              }
              else v[i][j]=max(v[i-1][j],v[i][j-1]);
          }
      }
      return v[n][n];
  }
    int longestPalinSubseq(string A) {
        //code here
        string s="";
        for(int i=A.length()-1;i>=0;i--)
        {
            s.push_back(A[i]);
        }
        return fn(A,s);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends