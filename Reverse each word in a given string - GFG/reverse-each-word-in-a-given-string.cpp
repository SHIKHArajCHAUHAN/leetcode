//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        int n=s.length();
        int i=0,j=0;
        while(i<n&&j<n)
        {
            if(s[i]!='.'){
                i++;
            }
            else
            {
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;i++;
            }
        }
        reverse(s.begin()+j,s.end());
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends