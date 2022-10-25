//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    char nthFibonacciDigit(long long int n) {
        // code here
      int a = 0;
       int b = 1;
       int c = 0;
       string s = "1";
       for(int i = 0 ; i <= n ; i++)
       {
           c = a+b;
           a = b;
           b = c;
           s += to_string(b);
       }
       return s[n-1];
       
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
        cout << ob.nthFibonacciDigit(n) << endl;
    }
    return 0;
}

// } Driver Code Ends