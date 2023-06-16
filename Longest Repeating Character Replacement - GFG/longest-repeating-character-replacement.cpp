//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string S, int K) {
        // code here
           int ans=0,maxcount=0,i=0;
        unordered_map<char,int>m;
        for(int j=0;j<S.size();j++){
            m[S[j]]++;
            maxcount=max(maxcount,m[S[j]]);
            while(j-i+1-K>maxcount){
                m[S[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends