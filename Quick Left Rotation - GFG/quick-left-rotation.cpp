//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   /*stack<int>s1;

	   for(int i=n-1;i>=k;i--)
	   {
	     s1.push(arr[i]);
	   }
	   queue<int>q;
	   for(int i=0;i<k;i++)
	   {
	       q.push(arr[i]);
	   }
	  int i=0;
	  while(!s1.empty())
	  {
	    arr[i]=s1.top();
	    s1.pop();
	    i++;
	  }
	  int j=n-k;
	  while(!q.empty())
	  {
	      arr[j]=q.front();
	      q.pop();
	      j++;
	  }
	  
	} */
	int arr2[n];

    int j=0;

    k=k%n;

      for(int i=k;i<n;i++)

             arr2[j++]=arr[i];

      for(int i=0;i<k;i++)

                    arr2[j++]=arr[i];

     for(int i=0;i<n;i++)

              arr[i]=arr2[i];
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
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends