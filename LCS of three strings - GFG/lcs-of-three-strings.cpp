//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int LCSof3 (string A, string B, string C, int n1, int n2, int n3);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        cout << LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    // your code here
    
    int v[n1 + 1][n2 + 2][n3 + 3];
    
    for(int i = 0; i <= n1; i++) {
        for(int j = 0; j <= n2; j++) {
            for(int k = 0; k <= n3; k++) {
                
                if(i == 0 || j == 0 || k == 0) {
                    v[i][j][k] = 0;
                    
                } else if(A[i - 1] == B[j - 1] && B[j - 1] == C[k - 1]) {
                    v[i][j][k] = 1 + v[i - 1][j - 1][k - 1];
                    
                } else {
                v[i][j][k] = max(v[i - 1][j][k], max(v[i][j - 1][k], v[i][j][k - 1]));
                }
                
            }
        }
    }

    return v[n1][n2][n3];
}