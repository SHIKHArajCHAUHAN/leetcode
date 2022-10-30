//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
	    // Code here
	    long long int dp[6]={0};
	    dp[0]=1;
	    long long ans=1;
	    for(int i=1;i<n;i++)
	    {
	        if(i>5)
	        {
	            ans-=dp[(i-6)%6];
	        }
	        dp[i%6]=ans*2;
	        ans+=dp[i%6];
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends