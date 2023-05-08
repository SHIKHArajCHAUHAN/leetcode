//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int fnzero(int x)
    {
        int zero=0;
        int den=5;
        while(x>=den)
        {
            zero+=(x/den);
            den*=5;
        }
        return zero;
    }
        int findNum(int n)
        {
        //complete the function here
        int l=0;
        int h=5*n;
        int ans=l;
        while(l<=h)
        {
            int mid=(l+h)/2;
            int zero=fnzero(mid);
            if(zero>=n)
            {
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends