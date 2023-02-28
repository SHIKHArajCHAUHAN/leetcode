//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        // Code here
         vector<int> ans;
        if(n==1)ans.push_back(0);
        if(n>=2) {
            ans.push_back(0);
            ans.push_back(a[1]-a[0]);
        }
        int m=0,l=0,r=a[1]-a[0];////mediun ko target kr rhi

        for(int i=2; i<n; ++i) {

            if(i%2==0) {

                m++;
                l+=(a[m]-a[m-1])*(m);
                r-=(a[m]-a[m-1])*(i-m);
            }
            r+=a[i]-a[m];
            ans.push_back(l+r);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution obj;
        vector<int> ans=obj.optimalArray(n,a);
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends