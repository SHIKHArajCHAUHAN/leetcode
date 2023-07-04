//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToPre(string post_exp) {
        // Write your code here
        stack<string>st;
        for(auto i:post_exp)
        {
            if((i>='a'&&i<='z')||(i>='A'&&i<='Z')||(i<='0'&&i>='9'))
            {
                string temp;
                temp=temp+i;
                st.push(temp);
            }
            else
            {
               string a=st.top();st.pop();
               string b=st.top();st.pop();
               st.push(i+b+a);
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
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends