//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long N) {
        // code here
     /*   long long sum=0;
    for(long long i=1;i<=N;i++)
    {
        sum+=i*i*i;
    }
      return sum;  */
      /*    if(N == 0)

        return 0;

        return pow(N,3) + sumOfSeries(N-1);*/
        long long ans=N*(N+1)/2;
        return ans*ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends