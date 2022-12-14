//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        //code here
         if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        else{
     long long int x=dividend/divisor;
        return  x;}
    
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends