//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<string> yShapedPattern(int N) {
        // code here
        vector<string>v;
        for(int i=0;i<N/2;i++)
        {
            string str="";
            for(int j=0;j<(N+1);j++){
                if(j==i || j==(N-i))

                    str += "*";
                else
                    str += " ";
            }v.push_back(str);
        }
         for(int i=N/2;i<N;i++)
{
            string str;
            for(int j=0;j<(N+1);j++){
                if(j==N/2)
                    str += "*";
                else
                    str += " ";}
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
        vector<string> v = ob.yShapedPattern(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends