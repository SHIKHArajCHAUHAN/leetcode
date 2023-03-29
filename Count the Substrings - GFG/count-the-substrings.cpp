//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
            int cnt = 0;
    // unordered_map<int, int> mp;
    // mp[0] = 1;
    // int diff = 0;
    // for (int i = 0; i < S.length(); i++) {
    //     char c = S[i];
    //     diff += isupper(c) ? 1 : -1;
    //     if (mp.find(diff)!=mp.end()) {
    //         cnt += mp[diff];
    //     }
    //     mp[diff]++;
    // }
    for(int i=0;i<S.length();i++)
    {
        int low=0,high=0;
        for(int j=i;j<S.length();j++)
        {
            if(S[j]>='a'&&S[j]<='z')low++;
              if(S[j]>='A'&&S[j]<='Z')high++;
              if(low==high) cnt++;
        }  //if(low==high) cnt++;
    }
    return cnt;

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
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends