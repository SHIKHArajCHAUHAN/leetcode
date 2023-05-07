//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
          int k=0;
        for(int i=0;i<str.size()-1;i++){
            
            if(str[i]>str[i+1])k++;
            else if(str[i]==str[i+1] and i>0)k++;
            else break;
        }
        string s="";
        for(int i=0;i<k+1;i++){
            s+=str[i];
        }
        for(int i=k;i>=0;i--){
            s+=s[i];
        }
        return s;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends