//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int greaterPower(long long a , long long b , long long m , long long n) {
        // code here
        double x = 0;
       double y = 0;
       
       if(b!=0){
           x = b*log(a);
       }else{
           x = 1;
       }
       
       if(n!=0){
           y = n*log(m);
       }else{
           y = 1;
       }
       
       if(x==y) return -1;
       else if(x>y) return 1;
       return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b,m,n;
        
        cin>>a>>b>>m>>n;

        Solution ob;
        cout << ob.greaterPower(a,b,m,n) << endl;
    }
    return 0;
}
// } Driver Code Ends