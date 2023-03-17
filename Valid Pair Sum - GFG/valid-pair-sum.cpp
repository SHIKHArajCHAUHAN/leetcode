//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	sort(a,a+n);
        long long count=0;
        int start=0;
        int end=n-1;
        while(start<end){
            if(a[end]+a[start]>0){
                 count+=end-start;

                 end--;}
             else

               start++;
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
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 


// } Driver Code Ends