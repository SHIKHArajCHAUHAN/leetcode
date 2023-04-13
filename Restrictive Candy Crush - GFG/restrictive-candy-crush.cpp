//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
//         stack<int>st;
//         for(int i=0;i<s.length();i++)
//         {
//             if(st.size()!=0&&st.top()==s[i])st.pop();
//           else st.push(s[i]);
// }
// string str="";
// while(!st.empty())
// {
//     str.push_back(st.top());
//     st.pop();
// }
// reverse(str.begin(),str.end());
// return str;
 stack<pair<char,int>>st;
          string ans="";
        if(k==1) return ans;
        for(int i=0;i<s.size();i++){
            if(!st.empty()){
                auto p=st.top();
                
            if(p.first==s[i]){
                 st.pop();
                p.second++;
                st.push({p.first,p.second});
                if(p.second==k) st.pop();
            }
            else{
                st.push({s[i],1});
            }
            }
           else  st.push({s[i],1});
        }
      
        while(!st.empty()){
            pair<char,int> p=st.top();
            for(int i=0;i<p.second;i++)
            ans+=p.first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends