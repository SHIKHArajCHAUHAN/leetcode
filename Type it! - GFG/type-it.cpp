//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
             int cnt = 1,maxx=0;
        for(int i=1;i<s.size();i++)
        {
            string str = s.substr(i,i);
            string str2 = s.substr(0,i);
            if(str == str2) 
                maxx = max(maxx,i);
           cnt++;
        }
        if(maxx>0)
            cnt = cnt - maxx + 1;
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends