//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	   int v[nums.size()+1][amount+1];
        int n=nums.size();
    
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
            if(j%nums[0]==0)
                v[i][j]=j/nums[0];
            else
            v[i][j]=INT_MAX-1;
        }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(nums[i-1]<=j)
                {
                    v[i][j]=min(1+v[i][j-nums[i-1]],v[i-1][j]);
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
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends