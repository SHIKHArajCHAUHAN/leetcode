//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    long long int  total_count(long long int n) 
    {
        // Code here.
        long long int ans=0;
       /* for(int i=0;i<=n;i++)
        {
            if((i^n)==(i|n)) ans++;
        }*/
        while(n)
        {
            if((n&1)==0) ans++;
            n>>=1;
        }
        return pow(2,ans);
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n; 
    	cin >> n;
    	Solution ob;
    	long long int ans = ob.total_count(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends