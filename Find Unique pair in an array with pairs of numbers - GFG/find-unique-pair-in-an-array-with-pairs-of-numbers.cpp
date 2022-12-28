//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    vector<int> findUniquePair(int arr[], int n)
    {
    	// Complete the function and return the sorted vector.
    	int xorr=0;
    	for(int i=0;i<n;i++)
    	{
    	    xorr^=arr[i];
    	}
    	int rsb=xorr&-xorr;
    	int x=0,y=0;
    	for(int i=0;i<n;i++)
    	{
    	    if((arr[i]&rsb)==0)x^=arr[i];
    	    else y^=arr[i];
    	}
    	if(y>=x) return {x,y};
    	else return {y,x};
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n; 
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    vector<int> v;
	    Solution ob;
	    v = ob.findUniquePair(a, n);
	    cout<<v[0]<<" "<<v[1]<<endl;
	}
	return 0;
}

// } Driver Code Ends