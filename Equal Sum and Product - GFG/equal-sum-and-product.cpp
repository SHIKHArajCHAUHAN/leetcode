//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// returns required number of subarrays
	int numOfsubarrays(int arr[], int n) {
	    // code here
	    int i=0;
	    int cnt=0;
	    for(i;i<n;i++)
	    {
	         int sum=arr[i];
	    int prod=arr[i];
	    if(sum==prod) cnt++;
	   int j=i+1;
	    while(j<n)
	    {
	        sum+=arr[j];
	        prod*=arr[j];
	        if(sum==prod)cnt++;
	        j++;
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
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.numOfsubarrays(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends