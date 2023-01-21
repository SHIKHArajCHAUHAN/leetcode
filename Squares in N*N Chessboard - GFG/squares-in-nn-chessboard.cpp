//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long total=0;
        for(long long i=1;i<=N;i++)
        {
            total+=i*i;
        }
        return total;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}
// } Driver Code Ends