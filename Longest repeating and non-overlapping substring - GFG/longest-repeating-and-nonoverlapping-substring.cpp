//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string longestSubstring(string S, int N) {
        // code here
               vector<vector<int>> dp(N+1,vector<int>(N+1,0));
        
        int maxLen = 0, index = 0;
        
        for(int i=1;i<N+1;i++)
        {
            for(int j=1;j<N+1;j++)
            {
                if(S[i-1] == S[j-1] && i!=j)
                {
                    if(i+dp[i-1][j-1] < j)
                    {
                        dp[i][j] = 1+dp[i-1][j-1];
                        if(dp[i][j] > maxLen)
                        {
                            maxLen = dp[i][j];
                            index = i-maxLen;
                        }
                    }
                }
            }
        }
        
        if(maxLen == 0) return "-1";
        else return S.substr(index,maxLen);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends