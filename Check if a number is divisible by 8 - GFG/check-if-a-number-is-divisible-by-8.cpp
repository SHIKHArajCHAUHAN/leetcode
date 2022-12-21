//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int DivisibleByEight(string S){
        //code here
        int n=S.length();
        int ans=(S[n-3]-'0')*100+(S[n-2]-'0')*10+S[n-1]-'0';
        if(ans%8==0) return 1;
        else return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends