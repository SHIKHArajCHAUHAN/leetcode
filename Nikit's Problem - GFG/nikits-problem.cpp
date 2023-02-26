//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	vector<int>maximumScore(int n, int x, int y, int a, int b, int p, int q){
	    // Code here
	    vector<vector<int>>v;
	    int maxx=0;
	    int total=0;
	    for(int i=0;i<=a;i++)
	    {
	        for(int j=0;j<=b;j++)
	        {
	            if((i*p+j*q)<=n){
                           total=x*i+y*j;
	                if(total>=maxx){
	                    maxx=total;
	                    v.push_back({i,j});
	        }
	    }
	        }
	    }
	       vector<int> ans(2);
	    int mx=INT_MIN;
	    for(auto it:v){
	        if(it[0]>mx){
	            ans[0]=it[0];
	            ans[1]=it[1];
	        }
	    }
	    return ans;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, x, y, a, b, p, q;
		cin >> n >> x >> y >> a >> b >> p >> q;
		Solution ob;
		vector<int> ans = ob.maximumScore(n, x, y, a, b, p, q);
		for(auto i : ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends