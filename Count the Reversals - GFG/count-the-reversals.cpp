//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends



int countRev (string s)
{
    // your code here
stack<char>st;
int cnt=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='{')
    
    {
        st.push(s[i]);
    }
    else
    {
        if(st.size()>0) st.pop();
        else cnt++;
    }
}
int res=0;
if(cnt%2==1&&st.size()%2==1) res=cnt/2+st.size()/2+2;
else if(cnt%2==0&&st.size()%2==0) return res=cnt/2+st.size()/2;
else return -1;
return res;
}