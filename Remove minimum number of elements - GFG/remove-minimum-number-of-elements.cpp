//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int minRemove(int a[], int b[], int n, int m) {
        // set<int>s1,s2;
        // for(int i=0;i<n;i++)
        // {
        //     s1.insert(a[i]);
        // }
        // for(int i=0;i<m;i++)
        // {
        //     s2.insert(b[i]);
        // }
        // int cnt=0;
        // for(auto i:s1)
        // {
        //     if(s2.find(i)!=s2.end())cnt++;
        // }
        // return cnt;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
           //mp.insert(a[i]);
        }
        int cnt = 0;
        for(int i=0;i<m;i++)
        {
            if(mp.find(b[i]) !=mp.end() && mp[b[i]] !=0)
            {
                mp[b[i]] -- ;
                cnt++;
            }
             
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int a[n], b[m];
        for (i = 0; i < n; i++) cin >> a[i];
        for (i = 0; i < m; i++) cin >> b[i];
        Solution obj;
        cout << obj.minRemove(a, b, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends