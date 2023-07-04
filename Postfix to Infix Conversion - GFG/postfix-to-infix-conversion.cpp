//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToInfix(string exp) {
        // Write your code here
        stack<string>s;
        for(int i=0;i<exp.length();i++){
            char ch=exp[i];
            if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
                string temp="";
                temp+=ch;
                s.push(temp);
            }else{
          
                string s1=s.top();s.pop();
                string s2=s.top();s.pop();
            
                s.push('('+s2+ch+s1+')');
            }
        }
        return s.top();
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
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends