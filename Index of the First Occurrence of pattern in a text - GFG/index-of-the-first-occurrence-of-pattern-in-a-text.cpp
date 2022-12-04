//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMatching(string text, string pat) {
        // Code here
       /* int n1=text.size();
        int n2=pat.size();
        for(int i=0;i<n1;i++)
        {
            int cnt=0;
            for(int j=0;j<n2;j++)
            {
                if(text[i]==pat[j]);
                i++;
                cnt++;
            }if(cnt==n2) return i-n2;
        }
        return -1;*/
         if(pat.length()>text.length())
        {
            return -1;
        }
        for(int i=0;i<text.length()-pat.length()+1;i++)
        {
            if(pat==text.substr(i,pat.length()))

            {

                return i;}
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    }
    return 0;
}
// } Driver Code Ends