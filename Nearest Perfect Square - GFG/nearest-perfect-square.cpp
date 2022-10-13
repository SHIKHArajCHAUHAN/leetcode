//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> nearestPerfectSquare(int N) {
        // code here
        long long int a=sqrt(N);
        long long int res=0;
        if(a*a==N) return {N,0};
        long long int b=pow((a+1),2);
        long long int c=pow(a,2);
        if( abs(N-b)>abs(N-c))
         res=c;
        else res=b;
        return {res,min(abs(N-b),abs(N-c))};
        
        
        
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
        vector<int> ans = ob.nearestPerfectSquare(N);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends