//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long maxProduct(int arr[], int n) {
        // code here
         if(n<3){
            return -1;
        }
    sort(arr,arr+n);
     long long a1=arr[0];
      long long a2=arr[1];
       long long a3=arr[n-1];
      long long b1=arr[n-3];
      long long b2=arr[n-2];
   return max(a1*a2*a3,b1*b2*a3);
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
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends