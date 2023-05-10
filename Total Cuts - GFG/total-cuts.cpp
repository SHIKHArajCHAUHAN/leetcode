//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        vector<int>p,s;
        int count=0,maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<N-1;i++){
            if(A[i]>maxi)
            maxi=A[i];
            p.push_back(maxi);
            
            if(A[N-i-1]<mini)
            mini=A[N-i-1];
            s.push_back(mini);
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<N-1;i++)
            if(p[i]+s[i]>=K)
            count++;
        
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends