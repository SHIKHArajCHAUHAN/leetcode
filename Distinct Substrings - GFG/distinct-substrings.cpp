//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}
// } Driver Code Ends


int fun(string s)
{
    //code here
    map<string,int> mp;
   int count  =0 ;
   for(int i = 0; i < s.length()-1; i++){
       string st;
       st += s[i]; st+= s[i+1];
       if(mp.find(st) == mp.end()){
           count++;
       }
       mp[st]++;
   }
   return count;
    
}