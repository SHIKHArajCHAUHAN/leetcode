//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<string> interestingPattern(int N) {
        // code here
        vector<string>v;
        int x = 2*N - 2;
          for(int i=0;i<=x;i++){
              string str="";
                for(int j=0;j<=x;j++){
                      int n1 = min(i,j);
                      int n2 = min(x-i,x-j);
                      n2 = min(n1,n2);
                      str+=to_string(N-n2);
                }
                v.push_back(str);
          }
          return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.interestingPattern(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends