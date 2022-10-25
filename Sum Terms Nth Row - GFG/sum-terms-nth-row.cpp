//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	int Nth_rowSum(int n){
   	    // Code here.
   	    int m=1e9+7;
   	   int ele = n*2;
        int right = n*(n+1);
        int left = right-ele+1;
        int ans = 0;
        for (int i=left; i<=right; i++){

            ans = (ans + i)%m;}
        return ans;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.Nth_rowSum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends