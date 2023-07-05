//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
         int ans = 0;
        for(int i = 1;i < n;i++) 
            for(int j = 0;j < m;j++)
                if(M[i][j]) M[i][j] += M[i-1][j];
        for(int i = 0;i < n;i++){
            stack <int> stk;
            for(int j=0;j<=m;j++){
                while(!stk.empty() && (j == m || M[i][stk.top()] > M[i][j])){
                    int tp = stk.top();
                    stk.pop();
                    ans = max(ans,
                            M[i][tp]*(stk.empty()?j:(j-stk.top()-1)));
                }
                stk.push(j);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends