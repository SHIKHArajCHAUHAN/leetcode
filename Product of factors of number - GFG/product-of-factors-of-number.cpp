//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int factorProduct(int N) {
        // code here
        
        long m=1000000007;
        long prod=1;
        for(int i=1;i<=sqrt(N);i++)
        {
            if(N%i==0)
            if(N/i==i) prod=(prod%m)*i;
            else
            prod=((prod%m*i%m)*(N/i))%m; 
        }
        return prod%m;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.factorProduct(N) << "\n";
    }
}
// } Driver Code Ends