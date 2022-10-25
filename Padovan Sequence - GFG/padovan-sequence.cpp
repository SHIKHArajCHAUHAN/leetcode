//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int padovanSequence(int n)
    {
       //code here
       if(n<=2) return 1;
       int dp[n+2];
       dp[1]=dp[2]=dp[0]=1;
       for(int i=3;i<n+2;i++)
       {
           dp[i]=dp[i-2]+dp[i-3];
       }
       return dp[n];
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends