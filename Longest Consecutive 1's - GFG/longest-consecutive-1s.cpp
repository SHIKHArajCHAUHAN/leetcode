//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
       int maxx=0;
       int cnt=0;
       while(N)
       {
           if((N&1)!=0) 
           {cnt++;
        
           }
           else
           {
               maxx=max(maxx,cnt);
               cnt=0;
                
           }
           N=N>>1;
           maxx=max(maxx,cnt);
       }
       return maxx;
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends