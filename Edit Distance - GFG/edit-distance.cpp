//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        int n=s.length();
        int m=t.length();
        
        vector<vector<int>>v(n+1,vector<int>(m+1,0));
        for(int i=0;i<n+1;i++)
        {
            v[i][0]=i;
            
        }
            
            for(int j=0;j<m+1;j++)
            {
               v[0][j]=j; 
            }
            for(int i=1;i<n+1;i++)
            {
                for(int j=1;j<m+1;j++)
                {
                    if(s[i-1]==t[j-1])
                    {
                        v[i][j]=v[i-1][j-1];
                    }
                    else
                    {
                        v[i][j]=1+min(v[i-1][j],min(v[i][j-1],v[i-1][j-1]));
                    }
                }
            }
            return v[n][m];
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends