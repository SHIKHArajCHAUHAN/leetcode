//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
      // return 1+(n*(n-1))/2; 
          int mod=1000000007;
         long dp[n+1];
         dp[1]=1;
         for(int i=0;i<=n;i++){
             if(i<=2){
                 dp[i]=i;
             }
             else{
                 dp[i]= (dp[i-1] + (i-1) * dp[i-2])%mod;
             }
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
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends