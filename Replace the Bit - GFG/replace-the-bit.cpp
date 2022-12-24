//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int replaceBit (int n, int k)
    {
        //code here.
       int numofbit=log2(n)+1;
       int msk=numofbit-k;
       if(msk<0) return n;
       int ans=n&(1<<msk);
       if(ans!=0) return n^(1<<msk);
       else return n;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        Solution ob;
        cout <<ob.replaceBit (n, k) << endl;
    }
    return 0;
}


// } Driver Code Ends