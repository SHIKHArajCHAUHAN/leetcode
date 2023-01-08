//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxNumbers(int n, int k, int a[]){
        // code here
        sort(a,a+n);
        int sum=0;
      int ans=0;
      set<int>s;
      for(int i=0;i<n;i++)
      {
          s.insert(a[i]);
      }
      for(int i=1;i<1e9;i++)
      
      {
          if(s.find(i)==s.end())
          {
              sum+=i;
              if(sum<k)
              ans++;
          
          else break;
      }
      }
      return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.maxNumbers(n, k, a)<<"\n";
    }
    return 0;
}
// } Driver Code Ends