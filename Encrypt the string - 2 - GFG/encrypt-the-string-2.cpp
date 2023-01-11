//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string encryptString(string S) {
        // code here
     /*  map<int,char>mp;
        map<int,int>mp1;
         mp[0]='0';
       mp[1]='1';
       mp[2]='2';
       mp[3]='3';
       mp[4]='4';
       mp[5]='5';
       mp[6]='6';
       mp[7]='7';
       mp[8]='8';
       mp[9]='9';
       mp[10]='a';
       mp[11]='b';
       mp[12]='c';
       mp[13]='d';
       mp[14]='e';
       mp[15]='f';
       /* for(int i=0;i<S.length();i++)
        {
            mp1[S[i]]++;
        }
        string s="";
        for(auto i:mp1)
        {
              s+=i.first;
            s+=mp[i.second];

        }
        reverse(s.begin(),s.end());
        return s;*/
      /*  string s="";
        int cnt=1;
        for(int i=0;i<S.length();i++)
        {
           if(S[i]==S[i+1])
           {
               cnt++;continue;
           }
           s+=S[i];
           s+=mp[cnt];
           cnt=1;
        }
         reverse(s.begin(),s.end());
         return s;*/
         map<int, char> mp;
       mp[0]='0';
       mp[1]='1';
       mp[2]='2';
       mp[3]='3';
       mp[4]='4';
       mp[5]='5';
       mp[6]='6';
       mp[7]='7';
       mp[8]='8';
       mp[9]='9';
       mp[10]='a';
       mp[11]='b';
       mp[12]='c';
       mp[13]='d';
       mp[14]='e';
       mp[15]='f';
       int cnt=1, i, j, sum=0, len=S.size();
       string s="";
       for(i=0;i<len;i++){
           if(S[i]==S[i+1]){
               cnt++;
               continue;
           }
           s.push_back(S[i]);
           while(cnt>0){
               sum=cnt%16;
               s+=mp[sum];
               cnt=floor(cnt/16.0);
               
           }
           cnt=1;
       }
       reverse(s.begin(), s.end());
       return s;
         
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;

        Solution ob;
        cout<<ob.encryptString(S)<<endl;
    }
    return 0;
}
// } Driver Code Ends