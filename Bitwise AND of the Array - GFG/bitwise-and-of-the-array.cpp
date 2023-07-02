//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int count(int N, vector<int> A,int X)
    {
        // code here
         int setBit=0,minn=INT_MAX;
        for(int i=30;i>=0;i--){
            if(((1<<i)&X)>0){
                setBit|=1<<i;
            }
            else{
                int temp=setBit|(1<<i),notmodify=0;
                
                for(int a:A){
                    if((temp&a)==temp){
                        notmodify++;
                    }
                }
                minn=min(minn,N-notmodify);
            }
        }
        return minn;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> A(N);
        for(auto &i:A)
            cin>>i;
        Solution obj;
        int ans = obj.count(N, A, X);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends