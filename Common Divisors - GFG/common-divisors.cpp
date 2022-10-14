//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int commDiv(long long int a,long long int b) {
        // code here
         long long cnt=0;
        for(int i=1;i<=min(a,b);i++)
        {
            if(a%i==0 and b%i==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a >> b;
        Solution ob;
        cout<<ob.commDiv(a, b)<<endl;
    }
    return 0;
}

// } Driver Code Ends