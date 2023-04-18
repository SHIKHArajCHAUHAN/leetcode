//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int i=0;int j=0;
       while(i<S.length()&& j<T.size())
            {
                if(S[i]==T[j])i++,j++;
                else
                {
                    if(!isdigit(T[j]))
                    {
                        return 0;
                    }
                    int n=0;
                    while(j<T.size()&&isdigit(T[j]))
                    {
                        n=n*10+(T[j]-'0');
                        j++;
                    }
                    i+=n;
                }
                
            }
        if(i==S.length()&&j==T.length())
        return 1;
        else return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends