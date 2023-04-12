//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        int n=s.length();
        stack<int>st;               /////done by help
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if (s[i]==')' && !st.empty())
            {
                s[i]='x';
                s[st.top()]='x';
                st.pop();
            }
        }

        int maxx=0,cnt=0;

        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='x')
            {
                cnt++;
                while(i>=1 && s[i-1]=='x')
                {
                    cnt++;
                    i--;
                }
            
            }
           
            
            if(maxx<cnt)
            maxx=cnt;

            cnt=0;
            
        }
        
        return maxx;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends