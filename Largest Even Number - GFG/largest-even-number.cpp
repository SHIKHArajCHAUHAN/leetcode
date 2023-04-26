//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string LargestEven(string S){
        //complete the function here
         sort(S.begin(),S.end(),greater<char>());
        int i=S.size()-1;
        while(i>=0)
        {
            if(int(S[i])%2==0)
            {
                swap(S[i],S[S.size()-1]);
                break;
            }
            i--;
        }
        sort(S.begin(),S.end()-1,greater<char>());
        return S;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.LargestEven(s) << "\n";
    }
return 0;
}


// } Driver Code Ends