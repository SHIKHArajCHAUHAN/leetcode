//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        long long lucas(int n)
        {
            //code here.
            long long m=1e9+7;
            long long dp[n+1]={-1};
            dp[0]=2;dp[1]=1;
            for(int i=2;i<=n+1;i++)
            {
               dp[i]=(dp[i-1]+dp[i-2])%m; 
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
		cout<<ob.lucas(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends