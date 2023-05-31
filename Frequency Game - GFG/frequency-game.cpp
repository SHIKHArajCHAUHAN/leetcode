//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
         int mini=INT_MAX;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto x:m)
        {
             mini=min(mini,x.second);
        }
        int maxi=INT_MIN;
        for(auto x:m)
        {
            if(x.second==mini)
            {
                maxi=max(maxi,x.first);
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends