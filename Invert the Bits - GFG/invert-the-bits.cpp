//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int invertBits(long long int N)
    { 
        //code here
        long long int x=pow(2,32)-1;
        return x^N;
    }
};

//{ Driver Code Starts.
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
        long long int N;
        cin>>N;
        Solution ob;
        cout<<ob.invertBits(N)<<"\n";
	}
} 
// } Driver Code Ends