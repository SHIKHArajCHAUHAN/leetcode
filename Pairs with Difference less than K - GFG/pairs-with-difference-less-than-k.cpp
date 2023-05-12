//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
        int countPairs(int a[], int n, int k)
    {
       int count = 0;
        sort(a, a+n);
        int i = 1;
        int j = 0;
        while(i < n){
            while(a[i] - a[j] >= k){
                j++;
            }   
            if((a[i] - a[j]) < k){
                count += (i - j);
            }
            i++;
        }
        return count;

    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k; int a[n],i;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    Solution ob;
	    cout << ob.countPairs(a, n, k) << endl; 
	}
	return 0;
}

// } Driver Code Ends