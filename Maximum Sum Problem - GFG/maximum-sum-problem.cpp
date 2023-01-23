//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            if(n<=11)

          return n;

          int a[n+1];
          for(int i=1;i<=n;i++)
          {
        if(i<=11)

        a[i]=i;

        else
        {
        int sum=(a[i/2])+(a[i/3])+(a[i/4]);

        a[i]=max(sum,i);

        }
          }

          return a[n];
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
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends