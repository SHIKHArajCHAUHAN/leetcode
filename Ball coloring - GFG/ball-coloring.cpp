//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    unsigned long long int noOfWays(unsigned long long int n){
        // code here
        unsigned long long int ans=0,cnt=1;
        for(int i=1;i<n;i++)
        {
            int x=cnt*2;
            ans+=x;
            cnt++;
        }
        return ans+2;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long int n;
        cin >> n;
        Solution ob;
        cout<<ob.noOfWays(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends