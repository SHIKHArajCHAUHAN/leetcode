//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxDistinctNum(int arr[], int n, int k)
    {
    	// Complete the function
    	map<int ,int>mp;
    	for(int i=0;i<n;i++)
    	{
    	    mp[arr[i]]++;
    	}
    	priority_queue<int>pq;
    	for(auto i:mp)
    	{
    	    pq.push(i.second);
    	}
        for(int i=0;i<k;i++)    	{
    	    int x=pq.top();pq.pop();
    	    x--;
    	    pq.push(x);
    	}
    	int cnt=0;
    	while(!pq.empty())
    	{
    	    if(pq.top()>0) cnt++;
    	    pq.pop();
    	}
    	return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i,k;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout <<ob.maxDistinctNum(arr, n, k)<<"\n";
	  }
	return 0;
}

// } Driver Code Ends