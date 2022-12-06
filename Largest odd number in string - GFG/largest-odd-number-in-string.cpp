//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code ,here
      /*  vector<int>v;
        for(int i=0;i.size();i++)
        {
            if((stoll(s[i]))%2!=0) v.push_back(stoll(s[i]));
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];*/
         string odd = "";
        int idx = -1;
        for(int i = s.size()-1; i >= 0; i--) {
            int x = s[i]-'0';
            if(x % 2 != 0) {
                idx = i;
                break;
            }
        }
        if(idx == -1) {
            return "";
        }
        
        for(int i = 0; i <= idx; i++) {
            odd += s[i];
        }
        return odd;
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

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends