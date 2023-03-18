//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
     long long fn(int n, vector<int>& A, int m) {
    vector<int> mp(2*n+1, 0);
    long long cur = n, total = 0, ans = 0;
    mp[cur]++;
    for (int i = 0; i < n; i++) {
        int x = -1;
        if (A[i] >= m) {
            x = 1;
        }
        if (x == -1) {
            total -= mp[cur+x];
        } else {
            total += mp[cur];
        }
        cur += x;
        ans += total;
        mp[cur]++;
    }
    return ans;
}
    long long countSubarray(int N,vector<int> A,int M) {
        // code here
       return fn(N, A, M) - fn(N, A, M+1);
    //   map<int,int>mp;
    //   mp[0]=1;
    //   int ans=0,sum=0;
    //   bool found=false;
    //   for(int nums:A)
    //   {
    //       if(nums<M)--sum;
    //       else  if(nums>M)++sum;
    //       else found=true;
    //       if(found)
    //       {
    //           ans+=mp[sum]-mp[sum-1];
    //       }
    //       else mp[sum]=mp[sum]+1;
    //   }
    //   return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin>>N>>M;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,M);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends