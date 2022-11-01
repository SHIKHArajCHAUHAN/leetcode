//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<int,vector<int>>pq(A,A+N);
        int ans=0;
        for(int i=0;i<K;i++)
        {
            int a=pq.top();
            ans+=a;
            pq.pop();
            pq.push(a/2);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends