//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string nextPalin(string N) { 
        //complete the function here
        int n=N.size();
        string st=N.substr(0,n/2);
        //string str=st;
        map<char,int>mp;
        for(auto i:N)
        {
            mp[i]++;
        }
        if(N.size()<=3)return "-1";
        if(!next_permutation(st.begin(),st.end())) return "-1";
         string str=st;
        reverse(str.begin(),str.end());
        if(n%2==1)
        st+=N[n/2];
        return st+str;
        
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
    return 0;
}
// } Driver Code Ends