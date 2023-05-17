//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isPossible(int n, int m, string s){
        // code here
        int l=0,r=0,u=0,d=0;
        int x=0;
        int y=0;
       for(int i=0;i<s.size();i++){  
           if(s[i]=='L'){
               l=min(l,--x);
           }
          else  if(s[i]=='R'){  
               r=max(r,++x);
           }
          else  if(s[i]=='U'){
               u=max(u,++y);
           }
          else if(s[i]=='D'){
               d=min(d,--y);
           }
       }
       if(r-l>=m||u-d>=n)return 0;
       return 1; 
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends