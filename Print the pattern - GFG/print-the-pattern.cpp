//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<string> pattern(int n){
        // code here
         vector<string>v(n,"");
       int n2=n*(n+1);
       int n1=n2-n+1;
       int t=n;
       int c1=1,c2=n2-n+1;
       for(int i=0;i<n;i++)
       {
           for(int l=0;l<i;l++)
           v[i]+="--";
           int c=0;
           for(int j=0;j<n-i;j++)
           {
           v[i]+=to_string(c1);
           v[i]+="*";
           c1++;
           c++;
           }
           for(int k=0;k<n-i;k++)
           {
               v[i]+=to_string(c2);
               if(k!=n-i-1)
               v[i]+="*";
               c2++;
               
           }
           c2=n1-c+1;
          n1=c2;
       }
       return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<string> ans = ob.pattern(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<"\n";
    }
    return 0;
}
// } Driver Code Ends