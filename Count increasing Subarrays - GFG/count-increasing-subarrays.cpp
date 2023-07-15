//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

	int countIncreasing(int arr[], int n) {
	    // code here
	    int cnt1=1;
	    int cnt=0;
	    for(int i=0;i<n-1;i++)
	    {
	       if(arr[i]<arr[i+1])cnt1++;
	       else
	       {
	           cnt+=(cnt1-1)*cnt1/2;
	           cnt1=1;
	       }
	    }
	    if(cnt1>1)cnt+=(cnt1-1)*cnt1/2;
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
        auto ans = ob.countIncreasing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends