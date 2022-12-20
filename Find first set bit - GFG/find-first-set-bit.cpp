//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
       /* vector<int>v;
        while(n)
        {
            int r=n%2;
            n/=2;
            v.push_back(r);
        }
        int ans;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1) return i+1;
        }
        return -1;*/
        //set the bit ans take and
            int cnt=0;

        if(n==0)
        return 0;
        for(int i=0; i<=31 ;i++)
        {
            cnt= n & (1<<i);//sare bit ko set ya not set check kr rhe
         if(cnt!=0)
          return i+1;
        }
        return 0;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends