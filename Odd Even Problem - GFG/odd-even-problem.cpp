//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string oddEven(string S) {
        // code here
    map<int,int>mp;
    int even=0,odd=0;
        for(int i=0;i<S.length();i++)
        {
          mp[S[i]-'a'+1]++;
        }
          for(auto it:mp){
             if(it.second%2==0 && (it.first)%2==0){
                 even++;
             }
             if(it.second%2!=0 && (it.first)%2!=0){
                 odd++;
             }
         }
         if((even+odd)%2==0){
             return "EVEN";
         }else{
             return "ODD";
         }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.oddEven(S) << endl;
    }
    return 0;
}

// } Driver Code Ends