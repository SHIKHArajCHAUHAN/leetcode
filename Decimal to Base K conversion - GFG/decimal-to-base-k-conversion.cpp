//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long changeBase(int N , int K) {
        // code here
        long long ans=0;
        long long multi=1;
        while(N)
        {
            long long r=N%K;
            ans=r*multi+ans;
            N=N/K;
            multi=multi*10;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;

        Solution ob;
        cout << ob.changeBase(N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends