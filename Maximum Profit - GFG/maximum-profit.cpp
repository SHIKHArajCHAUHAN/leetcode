//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        // code here
  vector<vector<int>>dp(N+1, vector<int>(2*K+1, 0));
        
        for(int i=N-1; i>=0; i--){
            for(int j=2*K-1; j>=0; j--){
                if (j % 2==0) dp[i][j]=max(-A[i]+dp[i+1][j+1], dp[i+1][j]);
                else dp[i][j]=max(A[i]+dp[i+1][j+1], dp[i+1][j]);
            }
        }
        return dp[0][0];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends