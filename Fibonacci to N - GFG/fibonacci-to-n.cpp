//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector <int> nFibonacci(int N){
        //code here
        vector<int>v;
    v.push_back(0);
v.push_back(1);
int a=0;
while(a<=N)
{int c=v.size();
a=v[c-1]+v[c-2];
if(a>N)
break;
v.push_back(a);
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
        vector <int> ans=ob.nFibonacci(N);
        for(int u:ans)
         cout<<u<<" ";
        cout<<"\n"; 
    }
}
// } Driver Code Ends