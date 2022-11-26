//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
           long res = 0;
        int len = (int)(log(X) / log(2));
        len++;
        while(X>0)
        { 
            res = res << 1;
            res = res | (X & 1);
            X = X>>1;}
        res = res << 32-len;

        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends