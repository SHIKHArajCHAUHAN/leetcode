//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
       map<char,int>mp;
       for(int i=0;i<s.length();i++)
       {
           mp[s[i]]++;
       }
      int res=INT_MAX;;
       string str="balon";
       for(int i=0;i<5;i++)
       {
           int x=mp[str[i]];
           if(str[i]=='o'||str[i]=='l')
           res=min(res,x/2);
           else res=min(res,x);
       }
       return res;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends