//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
vector<string>str;
void fn(string s,string s2)
{
    if(s.length()==0)
    {
        str.push_back(s2);
        return ;
    }
    string op1=s2;
    string op2=s2;
    op1.push_back(' ');
    op1.push_back(s[0]);
      op2.push_back(s[0]);
     s.erase(s.begin()+0);
     fn(s,op1);
     fn(s,op2);
}
    vector<string> permutation(string S){
  string s1="";       s1.push_back(S[0]);
       S.erase(S.begin()+0);
       fn(S,s1);
       return str;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends