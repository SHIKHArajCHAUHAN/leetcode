//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	bool  fn(int n)
	{
	  /*  for(int i=2;i<=sqrt(n);i++)
	    {
	        if(n%i==0)
	        return false;
	    }
	    return true;*/
	         if(n<=1)return 0;
     if(n==2 || n==3)return 1;
     if(n%2==0 || n%3==0)
     return 0;
     for(int i=5;i*i<=n;i=i+6)
     {
         if(n%i==0 || n%(i+2)==0)
         return 0;
     }
     return 1;
	}
   	long long int prime_Sum(int n){
   	    // Code here
   	    long long int ans=0;
   	    if(n==1) return 0;
   	    for(int i=2;i<=n;i++)
   	    {
   	        if(fn(i)) ans+=i;
   	    }
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
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends