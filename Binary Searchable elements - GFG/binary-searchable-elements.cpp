//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int binarySearchable(int Arr[], int n) {
        // code here
         int ans=0;
        for(int i=1;i<n-1;i++){
            if( Arr[i]> Arr[i-1] &&  Arr[i]< Arr[i+1]){
                ans++;}
        }
        if( Arr[1]> Arr[0]){ans++;}

        if( Arr[n-1]> Arr[n-2]){ans++;}

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int Arr[n];
        for(int i=0;i<n;i++){
            cin >> Arr[i];
        }
        Solution obj;
        cout<<obj.binarySearchable(Arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends