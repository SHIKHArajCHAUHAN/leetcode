//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
         vector<vector<int>> prefix(R, vector<int>(C, 0));
        int res = INT_MIN;
        
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                if(j==0)prefix[i][j]=M[i][0];
                else
             prefix[i][j] = prefix[i][j-1] + M[i][j];
            }
        }
        for(int i = 0; i < C; i++){
            for(int j = i; j < C; j++){
                int Max = INT_MIN;
                int sum = 0;
                for(int r = 0; r < R; r ++){
                    if(i == 0){
                        sum += prefix[r][j];
                    }else{
                        sum += prefix[r][j] - prefix[r][i-1];    
                    }
                    
                    if(sum > Max){
                        Max = sum;
                    }
                    if(sum < 0){
                        sum = 0;
                    }
                }
                if(Max > res){
                    res = Max;
                }
            }
        }
        
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}
// } Driver Code Ends