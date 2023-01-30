//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	    int n=nums.size();
	    int dp1[n],dp2[n];
	     for(int i=0;i<n;i++)
      {
          dp1[i]=1;
          for(int j=0;j<i;j++)
          {
              if(nums[i]>nums[j]&&dp1[j]+1>dp1[i])
              {
                  dp1[i]=1+dp1[j];
              }
          }
      }
       for(int i=n-1;i>=0;i--)
      {
          dp2[i]=1;
          for(int j=n-1;j>i;j--)
          {
              if(nums[i]>nums[j]&&dp2[j]+1>dp2[i])
              {
                  dp2[i]=1+dp2[j];
              }
          }
      }
      int maxx=0;
      for(int i=0;i<n;i++)
      {
          maxx=max(maxx,dp1[i]+dp2[i]-1);
      }
      return maxx;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends