//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        // Code here
         int idx_a=-1;
       int idx_b=-1;
       int idx_c=-1;
       int ans=0;
       for(int i=0; i<s.length() ; i++){
           
           if(s[i]=='a')  idx_a=i;
           if(s[i]=='b')  idx_b=i;
           if(s[i]=='c')  idx_c=i;
      
      
        ans=ans+min(idx_a , min(idx_b , idx_c) )+1;
        
                    
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends