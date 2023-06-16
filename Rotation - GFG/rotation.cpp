//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int left=0,right=n-1;
	    int index=-1;int minVal=INT_MAX;
	      while (left <= right) {
    if (arr[left] < arr[right]) {
      if(minVal> arr[left])index=left,minVal=arr[left];
      break;
    }
    int mid = left + (right - left) / 2;

    if (arr[left] <= arr[mid]) {
 if(minVal> arr[left])index=left,minVal=arr[left];
      left = mid + 1;
    } else {
       if(minVal> arr[mid])
       {index=mid;
       minVal=arr[mid];
       }
      right = mid - 1;
    }
  }
  return index;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends