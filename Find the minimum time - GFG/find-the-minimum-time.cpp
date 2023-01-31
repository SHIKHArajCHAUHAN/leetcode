//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minTime(int S1, int S2, int N){
        // code here
        int minnn=INT_MAX;
        for(int i=0;i<=N;i++)
        {
            int x=max(S1*i,S2*(N-i));
            minnn=min(minnn,x);
        }
        return minnn;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S1, S2, N;
        cin>>S1>>S2>>N;
        
        Solution ob;
        cout<<ob.minTime(S1, S2, N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends