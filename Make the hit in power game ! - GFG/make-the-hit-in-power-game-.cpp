//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long powerGame(long long X, long N) {
        // code here
           long long ans = 0;   
       long long d = X;   
       for(int i=1 ; i<=N ; i++)
       {
           long long dup = X;
           long long c = dup%10;    
           while(dup>=10)
               dup/=10;
           ans+=dup;
           ans*=10;
           ans+=c;
           ans*=10;
           X *= d;    
       }
       ans/=10;
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X,N;
        
        cin>>X>>N;

        Solution ob;
        cout << ob.powerGame(X,N) << endl;
    }
    return 0;
}
// } Driver Code Ends