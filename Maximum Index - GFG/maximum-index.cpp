//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
    int maxx=INT_MIN;
    /*for(int i=0;i<n;i++)
    {
        int j=n-1;
        while(j>=i)
        {
            if(arr[i]<=arr[j]);{
                maxx=max(maxx,j-i);
                break;
            }
            j--;
        }
    }
    return maxx;*/
    
if(n==1)return 0;
   int i=0;
   int j=n-1;
   while(i<j){
       if(arr[j]<arr[i]){
           j--;}
       else{
           maxx=max(maxx,j-i);
           j=n-1;
          i++;
       }
   }return maxx;
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
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends