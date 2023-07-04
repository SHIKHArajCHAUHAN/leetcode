//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long p=1;
        int s=0,e=0;
        int cnt=0;
        if(k==1) return 0;
        while(e<n)
        {
            p*=a[e];
            while(s<n&&p>=k)
            {
                p=p/a[s];s++;
            }
            if(p<k)
            {
                cnt+=e-s+1;
                e++;
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
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends