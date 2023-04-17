//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int k=0;
          while(b)
{
           if(b&1) k++;
           b>>=1;}
       int ans=0;
       for(int i=31;i>=0;i--){
           if(a&(1<<i) and k) {
           ans|=1<<i;

           k--;}
       }
       for(int i=0;i<32;i++){
           if(ans&(1<<i))
           continue;
           else if(k){
             ans|=1<<i;

             k--;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends