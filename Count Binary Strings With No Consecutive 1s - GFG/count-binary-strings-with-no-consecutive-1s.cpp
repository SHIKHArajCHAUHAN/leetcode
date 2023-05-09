//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  const long long M = 1000000007;
map<long long, long long> F;
long long fn(long long n) {
    if(F.count(n)) 
        return F[n];
    long long k=n/2;
    if (n%2==0) 
    {
        return F[n] = (fn(k)*fn(k) + fn(k-1)*fn(k-1)) % M;
    } 
    else 
    {
        return F[n] = (fn(k)*fn(k+1) + fn(k-1)*fn(k)) % M;
    }
}
    int countStrings(long long int N) {
        // Code here
        if(N==0)
            return 0;
        F[0]=F[1]=1;
        return fn(N+1);
    }
    // int countStrings(long long int N) {
    //     // Code here
    //     int z=1;
    //     int o=1;
    //     int sum=z+o;
    //     if(N==1) return sum;
    //     int i=2;
    //     while(i<=N)
    //     {
    //         o=z%(1000000007);
    //         z=sum%1000000007;
    //         sum=z+o%(1000000007);
    //         i++;
    //     }
    //     return sum;
    // }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int N;
        cin >> N;
        Solution obj;
        cout << obj.countStrings(N) << endl;
    }
}
// } Driver Code Ends