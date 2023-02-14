//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string isBalanced(int a[],int n,int x)
    {
      sort(a,a+n);
        int lower=lower_bound(a,a+n,x)-a;
        if(a[lower]==x || lower==0 || lower==n)
            return "Balanced";
        if(abs(a[lower-1]-x)==abs(a[lower]-x))
            return "Balanced";

        return "Not Balanced";
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>x;
	Solution ob;
	cout <<ob.isBalanced(arr, n, x)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends