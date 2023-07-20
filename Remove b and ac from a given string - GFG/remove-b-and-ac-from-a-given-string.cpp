//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
        //code here.
        // stack<char>st;
        // for(int i=0;i<str.length();i++)
        // {
        //     if(str[i]=='b')continue;
        // else if(st.size()==0)st.push(str[i]);
        //  else if(!st.empty()&&st.top()=='c'&&str[i]=='c')st.push(str[i]);
        //   else if(!st.empty()&&st.top()=='a'&&str[i]=='a')st.push(str[i]);
         
        //   else if(!st.empty()&&st.top()=='a'&&str[i]=='c')st.pop();
           
            
            
        // }
        // string ans="";
        // while(!st.empty())
        // {
        //     ans.push_back(st.top());st.pop();
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
             string ans="";
        int i=0;
        while(i<str.length()){
            if(str[i]=='b') i++;
            else if(str[i]=='a' and str[i+1]=='c') i+=2;
            else ans+=str[i++];
        }
        return ans;
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends