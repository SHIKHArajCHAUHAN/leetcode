//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int mapStr(long long int n) {
        // code here
         long  long int freq=1;
        for(long i=n;i>0;i--)
        {
            freq=(freq*i)%1000000007;
        }
        
        return freq%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int N;
        cin >> N;
        Solution ob;
        cout << ob.mapStr(N) << endl;
    }
    return 0;
}

// } Driver Code Ends