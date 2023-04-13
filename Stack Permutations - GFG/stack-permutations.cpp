//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
                stack<int> s;
        queue<int> q1;
        queue<int> q2;
        for(int i=0;i<N;i++){
            q1.push(A[i]);
            q2.push(B[i]);
        }
        while(!q1.empty()){
            s.push(q1.front());
            q1.pop();
            while(!s.empty()){
                    if(s.top()==q2.front()){
                        s.pop();
                        q2.pop();
                    }else{
                        break;
                    }
            }
        }
    if( q1.empty()&&q2.empty()) return 1;
    return 0;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        Solution ob;
        cout<<ob.isStackPermutation(n,a,b)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends