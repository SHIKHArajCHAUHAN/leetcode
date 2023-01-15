//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q) {
        int maxx=INT_MIN;
        vector<int>v;
     while(Q--)
     {
            int maxx=INT_MIN;
            int sum=0;
         for(int i=L[Q];i<=R[Q];i++)
         {
             sum+=a[i];
             maxx=max(maxx,sum);
         }
         v.push_back(maxx);
     }
     reverse(v.begin(),v.end());
     return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int a[n], L[q], R[q];
        
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < q; i++) cin >> L[i] >> R[i];
        Solution obj;
        vector<int> ans = obj.maxPrefixes(a, L, R, n, q);
        for (auto it : ans) 
            cout << it << " ";
        cout << endl;
    }
}

// } Driver Code Ends