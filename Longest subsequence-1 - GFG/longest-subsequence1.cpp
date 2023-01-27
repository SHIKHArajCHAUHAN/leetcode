//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int longestSubsequence(int N, int A[])
    {
        // code here
        vector<int> v(1001, 0);
        int ans = 0;
        
        for(int i = 0; i < N; i++){
            int diff1 = A[i]-1;
            int diff2 = A[i]+1;
            v[A[i]] = 1+max(v[diff1] , v[diff2]);
            ans = max(ans,v[A[i]]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}
// } Driver Code Ends