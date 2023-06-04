//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string reverseAlternate(string str)
{
    // code here 
     int cn=0;
    string a;
    string c;
    for(int i=0;i<=str.length();i++){
        if(str[i]==' '||i==str.length()){
            cn++;
          if(cn%2==0){
            reverse(a.begin(),a.end());
          }
         c+=a+" ";
         a="";
         continue;
        }
        a+=str[i];
    }
    return c;
}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.reverseAlternate(str)<<endl;
    }
    return 0;
}

// } Driver Code Ends