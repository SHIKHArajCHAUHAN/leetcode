//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:   vector<int>v;
    vector<int> jugglerSequence(int N){
        // code here
       // vector<int>v;
         v.push_back(N);
        if(N==1){
            return v;
        }
        if(v.back()%2==0){
            jugglerSequence(pow(N,0.5));
        }else{
            jugglerSequence(pow(N,1.5));
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends