//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int dp[501];
 int sp(int x , int s , int m , int l , int cs , int cm , int cl)
 {
     
     if(x<=0)return 0;
     if(dp[x]!=-1)return dp[x];
     
     int s1=INT_MAX;
     int s2=INT_MAX;
     int s3 = INT_MAX;
     
         s1= cs+sp(x-s,s,m,l,cs,cm,cl);
         s2 = cm+sp(x-m,s,m,l,cs,cm,cl);
         s3 = cl+sp(x-l,s,m,l,cs,cm,cl);
         
     return dp[x] = min(s1,min(s2,s3));
 }
   int getPizza(int X, int S, int M, int L, int CS, int CM, int CL) {
       // code here
       memset(dp,-1,sizeof(dp));
       return sp(X,S,M,L,CS,CM,CL);
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int X,S,M,L,CS,CM,CL;
        
        cin>>X>>S>>M>>L>>CS>>CM>>CL;

        Solution ob;
        cout << ob.getPizza(X,S,M,L,CS,CM,CL) << endl;
    }
    return 0;
}
// } Driver Code Ends