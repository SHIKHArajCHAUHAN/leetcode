//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	   /* map<int,int>mp;
	    for(int i=0;i<N;i++)
	    {
	        mp[A[i]]++;
	    }
	    for(auto i:mp)
	    {
	        if(i.second==1) return i.first;
	    }
	    return 0;*/
	    int ans=A[0];
	    for(int i=1;i<N;i++)
	    {
	      ans=ans^A[i] ; 
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends