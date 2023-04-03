//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
       // code here
    //   int even=0,odd=0;
    //   for(int i=0;i<x.length();i++)
    //   {
    //       if(i%2==0)even+=(x[i]-'0');
    //       else odd+=(x[i]-'0');
    //   }
    //   return (abs(even-odd))%11 ;
       long long ans=0;
        for(int i=0;i<x.length();i++)
            ans=(ans*10+x[i]-'0')%11;
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
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends