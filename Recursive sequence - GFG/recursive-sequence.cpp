//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int N){
        // code here
        long long ans=0;
        int k=1;
        for(int i=1;i<N+1;i++)
        {
            long long x=1;
            for(int j=1;j<=i;j++)
            {
                x=x*k++;
            }
            ans+=x;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends