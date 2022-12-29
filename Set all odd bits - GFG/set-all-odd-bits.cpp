//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int setAllOddBits(long long int n) {
        // code here
        long long int x=0x5555555; //one way taking or with n;
        long long int N=n;
        
       long long int  k=0;
       while(n>0)
       {
           if(k%2==0)
           N=N|(1<<k);
           k=k+1;
           n=n/2;
           
       }
       
       return N;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.setAllOddBits(n) << endl;
    }
    return 0;
}

// } Driver Code Ends