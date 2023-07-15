//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:

	vector<int> valid(int arr[],int n)
	{
	    // Your code goes here
	    int j=0;
	    vector<int> ans(n, 0);
	    for(int i=0;i<n;i++){
	        if(arr[i]==0) continue;
	        if(arr[j]==arr[i] && i!=0){
	            arr[j]=2*arr[j];
	            arr[i]=0;
	        }
	        else{
	            j=i;
	        }
	    }
	    int k=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0)
	        ans[k++]=arr[i];
	    }
	    return ans;
	}
		 
		 

};
	  

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int arr[n],i,j=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.valid(arr,n);
        for(i=0;i<n;i++)
        	cout<<ans[i]<<" ";
	    cout << "\n";
    }
    return 0;
}






// } Driver Code Ends