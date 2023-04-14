//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
       stack<string>st;
       string str="";
       for(int i=0;i<s.length();i++)
       {
           char ch=s[i];
                   if(ch!='+' && ch!='-' && ch!='*' && ch!='/')
                   {
                       str+=ch;
                   }
                   else
                   {
                       st.push(str);
                       st.push(string(1,ch));
                       str="";
                   }
       }
       st.push(str);str="";
       while(!st.empty())
{
    str+=st.top();st.pop();
} 
return str;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends