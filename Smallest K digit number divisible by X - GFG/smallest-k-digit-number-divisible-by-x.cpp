//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    long long smallestKDigitNum(long long X, long long K) {
        // code here
    long long tens=1;
    long long numb=pow(10,K-1);
    if(numb%X==0) return numb;
    else
    return ((numb+X)-((numb+X)%X));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X,K;
        
        cin>>X>>K;

        Solution ob;
        cout << ob.smallestKDigitNum(X,K) << endl;
    }
    return 0;
}
// } Driver Code Ends