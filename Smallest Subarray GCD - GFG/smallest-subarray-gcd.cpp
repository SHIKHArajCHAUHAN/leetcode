//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findSmallestSubArr(int arr[], int n, int g) {
        // code here
          int ans=INT_MAX,gcd=0;

        for(int i=0;i<n;i++){
            gcd=arr[i];
            for(int j=i;j<n;j++){
                if(arr[j]%g!=0) break;
                gcd=__gcd(gcd,arr[j]);
                if(gcd==g){
                    ans=min(ans,j-i+1);
                }
            }
        }
        return ans==INT_MAX ? -1:ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, g;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> g;
        Solution ob;
        auto ans = ob.findSmallestSubArr(arr, n, g);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends