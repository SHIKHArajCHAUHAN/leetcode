//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long nthFaithfulNum(int N) {
        // code here
        // int i=0;
        // long long ans=0;
        // N--;
        // while(N--)
        // {
        //     ans+=pow(7,i);
        //     i++;
        // }
        // return ans;
         long long int a = 0;
       int i=0;
       while(N){
           if(N&1)
            a += pow(7,i);
           i++; 
           N = N>>1;
       }
       return a;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.nthFaithfulNum(N) << endl;
    }
    return 0;
}
// } Driver Code Ends