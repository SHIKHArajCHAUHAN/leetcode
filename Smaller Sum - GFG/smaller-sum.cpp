//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        // sort(arr.begin(),arr.end());
        // vector<int>pre(n+1,0);
        // pre[0]=arr[0];
        // for(int i=1;i<n;i++)
        // {
        //     pre[i]=pre[i-1]+arr[i];
        // }
        // vector<int>res;
        // int l=0,h=n-1;
        // while(l<h)
        // {
        //     int mid=(l+h)/2;
            
        // }
        vector<int>v(arr.begin(),arr.end());
        sort(v.begin(),v.end());
        unordered_map<long long,long long>mp;
        long long sum=0;
        for(int i=0;i<n;i++) {
            mp.insert({v[i],sum});
            sum+=v[i];
        }
        vector<long long>ans;
        for(int i=0;i<n;i++) ans.push_back(mp[arr[i]]);
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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends