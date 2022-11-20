//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    int dp[n+1];
	    dp[0]=arr[0];
	    int ans=0;
	   
	   for(int i = 1; i < n; i++){
	       int pick = arr[i];
	       if(i > 1){
	           pick = arr[i]+arr[i-2];
	       }
	       int nonpick = 0+arr[i-1];
	       arr[i] = max(pick,nonpick);
	   }
	   return arr[n-1];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends