//{ Driver Code Starts
//Initial Template for C++

// C++ implementation to rearrange the array 
// elements after modification 
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        void modifyAndRearrangeArr(int arr[], int n) 
    { 
    	// Complete the function
    	  int j=0;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] == arr[i+1] && arr[i] != 0)
            {
                arr[i] = 2*arr[i];
                arr[i+1]=0;
            }
        }
        for(int i=0; i<n; i++)
        {
           if(arr[i] != 0)
           {
               swap(arr[i],arr[j]);
               j++;
           }
        }

    }
}; 


//{ Driver Code Starts.
// Driver program to test above 
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        ob.modifyAndRearrangeArr(arr, n);
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << endl;
        
    }

	return 0; 
} 

// } Driver Code Ends