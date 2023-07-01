//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    int countUnsetBits(int n, int l, int r) {
        // code here
         int inerct = 0,cnt = 0;
        while(n){
            inerct++;
            if(inerct >= l && inerct <= r){
                if(!(n & 1)) cnt++;
            }
            n >>= 1;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,l,r;
        
        cin>>n>>l>>r;

        Solution ob;
        cout << ob.countUnsetBits(n,l,r) << endl;
    }
    return 0;
}
// } Driver Code Ends