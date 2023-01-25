//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
{
    int amount=V;
       int v[M+1][amount+1];
        int n=M;
    
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(i==0) v[i][j]=INT_MAX-1;
                              if(j==0) v[i][j]=0;
            }
        }
        for(int i=0;i<n+1;i++)
        {
        for(int j=1;j<amount+1;j++)
        {
            if(j%coins[0]==0)
                v[i][j]=j/coins[0];
            else
            v[i][j]=INT_MAX-1;
        }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(coins[i-1]<=j)
                {
                    v[i][j]=min(1+v[i][j-coins[i-1]],v[i-1][j]);
                }
                else
                {
                    v[i][j]=v[i-1][j];
                }
            }
        }
        if(v[n][amount]==INT_MAX-1)return -1;
        return v[n][amount];
	    
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends