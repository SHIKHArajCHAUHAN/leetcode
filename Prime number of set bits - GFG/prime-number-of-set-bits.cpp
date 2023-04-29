//{ Driver Code Starts


// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int isPrime(int N){
        int c=0;
        if(N==1)
            return 0;
        for(int i=2;i<=sqrt(N);i++){
            if(N%i==0)
                c++;
            if(c==1)
                return 0;      
            }
        return 1;
    }
    int primeSetBits(int L, int R){
        // code here
          int cnt=0;
        for(int i=L;i<=R;i++){
           int x=__builtin_popcount(i);
            if(isPrime(x))
                cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.primeSetBits(L,R)<<endl;
    }
    return 0;
}

// } Driver Code Ends