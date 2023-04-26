//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
    long long numGame(long long n) {
        // code here
        long long ans=1;
        if(n==1)
        return 1;
        
        for(int i=2;i<=n;i++)
        {
            ans=((ans*i)/gcd(ans,i))%1000000007;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        
        cin>>n;

        Solution ob;
        cout << ob.numGame(n) << endl;
    }
    return 0;
}
// } Driver Code Ends