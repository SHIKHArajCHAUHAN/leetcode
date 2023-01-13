//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int sumExists(int arr[], int n, int sum) {
        // code here
           map<int,int>mp;
      /*  for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }*/
        for(int i=0;i<n;i++)
        {
            int x=sum-arr[i];
            if(mp.find(x)!=mp.end()) return 1;
            else mp[arr[i]]=i;
            
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum;
        cin >> n ;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin>>sum;
        Solution ob;
        auto ans = ob.sumExists(arr, n, sum);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends