//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
          vector<vector<int>> dp(n,vector<int>(4));
        for(int i=0;i<3;i++)dp[n-1][i]=points[n-1][i];
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<3;j++){
                int maxi=0;
                for(int k=0;k<3;k++){
                    if(k!=j) maxi=max(maxi,points[i][j]+dp[i+1][k]);
                }
                dp[i][j]=maxi;
            }
        }
        return max({dp[0][0],dp[0][1],dp[0][2]});
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends