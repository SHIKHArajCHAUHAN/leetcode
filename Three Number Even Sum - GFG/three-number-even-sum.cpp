//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countWays(int N)
	{
		// Your code goes here
		long long int even=0;
	long long int odd=0;
       if(N%2==0)
       {
           even=N/2;
           odd=N/2;
       }
       else
       {
           even=N/2;
           odd=N/2+1; 
       }
       long long int ans=0;
       ans=even *(odd*(odd-1))/2+(even*(even-1)*(even-2))/6;
       return ans%1000000007;
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

	    

	    Solution ob;
	    cout << ob.countWays(n) << "\n";
   
    }
    return 0;
}
// } Driver Code Ends