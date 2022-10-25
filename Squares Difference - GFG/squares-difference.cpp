//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    long long int squaresDiff(int N){
        // code here
        long long ans1=0;
        long long ans2=0;
        
        for(int i=1;i<=N;i++)
        {
ans1+=(long long int) i*i;
ans2+=(long long int)i;
}
return abs(ans1-ans2*ans2);
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
        cout << ob.squaresDiff(N) << endl;
    }
    return 0;
}

// } Driver Code Ends