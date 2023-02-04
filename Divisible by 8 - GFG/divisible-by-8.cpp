//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    bool fn(string str){
    int n=str.length();
    if(stoi(str.substr(max(n-3,0),min(n,3)))%8==0)return 1;
    return 0;
}
    int isDivisible8(string S) {
         sort(S.begin(),S.end());
    do{
        if(fn(S))return 1;
    }while(next_permutation(S.begin(),S.end()));
    return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        if (ob.isDivisible8(s)) {
            cout << "Divisible" << endl;
        } else
            cout << "Not Divisible" << endl;

    }
}
// } Driver Code Ends