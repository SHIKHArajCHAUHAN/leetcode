//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nthTerm(int n){
        // code here
        int m=1e9+7;
        int sum=7;
        if(n==1) return 7;
        for(int i=2;i<=n;i++)
        {
            sum=(sum*2+(i-1))%m;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        cout<<ob.nthTerm(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends