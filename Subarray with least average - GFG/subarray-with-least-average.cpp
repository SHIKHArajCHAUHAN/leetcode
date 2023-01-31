//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int least_average(vector<int>nums, int k)
	{
	    // Code here
	    int sum=0;
	    int n=nums.size();
	    for(int i=0;i<k;i++)
	        sum+=nums[i];
	    int res=1;
	    int temp=sum;
	    for(int i=k;i<n;i++){
	        temp=temp-nums[i-k]+nums[i];
	        if(temp<sum)
	            res=i-k+2,sum=temp;
	    }
	    return res;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.least_average(nums, k);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends