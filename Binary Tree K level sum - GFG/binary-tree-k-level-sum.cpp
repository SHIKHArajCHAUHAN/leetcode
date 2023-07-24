//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int kLevelSum(int K, string S) {
        // code here
        int sum=0 , level=-1;
        for(int i=0; i<S.length(); i++){
            if(S[i]=='(') level++;
            else if(S[i]==')') level--;
            else{
                if(K==level){
                    string st="";
                    st+=S[i];

                    while(S[i+1]!='('){

                        i++;

                        st+=S[i];

                    }

                    sum+=stoi(st);
                }

            }

        }

        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>K;
        cin>>S;

        Solution ob;
        cout << ob.kLevelSum(K,S) << endl;
    }
    return 0;
}
// } Driver Code Ends