//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
     if(len == 0 || len == 1) return 0;
    if(len == 2) return min(A[0],A[1])*(1-0);
    int s=0,e=len-1;
    long long ans = 0;
    while(s<=e){
        ans = max(ans,min(A[s],A[e])*(e-s));
        if(A[s] < A[e]) s++;
        else e--;}
    return ans;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends