//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     int prec(char c) {
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}
    string preToInfix(string pre_exp) {
        // Write your code here
          string ans;
        stack<string> st;
        int len = pre_exp.length();
        for(int i = len-1; i>=0; i--)
        {
            char ch = pre_exp[i];
            if(ch>='a' and ch<='z' || ch>='A' and ch<='Z' || ch>='1' and ch<='9')
            {
                string temp = "";
                temp = temp+ch;
                st.push(temp);
            }
            else
            {
                string res = "";
                res = res + "(" + st.top();
                st.pop();
                res = res + ch + st.top() + ")";
                st.pop();
                st.push(res);
            }
        }
     return st.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends