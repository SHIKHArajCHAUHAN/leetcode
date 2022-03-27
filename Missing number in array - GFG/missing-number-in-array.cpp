// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
      sort(array.begin(),array.end());
        // array[n-1];
     // std:: vector< int> sum2=n*(n+1)/2;
        for(int i=0;i<n;i++){
           // cin>>array[i];
         //  sum=sum+array[i];
          if(array[i]!=i+1) 
        return i+1;
    }}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends